/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** update_mouse
*/

#include "include.h"

void strike(all_maker_t *make)
{
    if (make->window_event.mouseButton.x <= make->target.ghost_position.x + 70 &&
    make->window_event.mouseButton.x >= make->target.ghost_position.x &&
    make->window_event.mouseButton.y <= make->target.ghost_position.y + 80 &&
    make->window_event.mouseButton.y >= make->target.ghost_position.y) {
        make->score += 1;
        level_one_ghost(make);
    }
}

void update_mouse_strike(all_maker_t *make)
{
    if (make->game_state == LEVEL_ONE &&
    make->window_event.type == sfEvtMouseButtonPressed &&
    make->window_event.mouseButton.button == sfMouseLeft)
        strike(make);
}

void update_mouse_animation(all_maker_t *make)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime
    (make->mouse.menu_mouse_clock)) >= 0.15) {
        make->mouse.menu_mouse_rect.left += 75;
        if (make->mouse.menu_mouse_rect.left >= 511)
            make->mouse.menu_mouse_rect.left = 0;
        sfSprite_setTextureRect(make->mouse.menu_mouse_sprite,
        make->mouse.menu_mouse_rect);
        sfClock_restart(make->mouse.menu_mouse_clock);
    }
}

void update_mouse_position(all_maker_t *make)
{
    if (make->window_event.type == sfEvtMouseMoved) {
        make->mouse.mouse_position.x = make->window_event.mouseMove.x - 35;
        make->mouse.mouse_position.y = make->window_event.mouseMove.y - 35;
        sfSprite_setPosition(make->mouse.game_mouse_sprite,
        make->mouse.mouse_position);
        sfSprite_setPosition(make->mouse.menu_mouse_sprite,
        make->mouse.mouse_position);
    }
}

void update_mouse(all_maker_t *make)
{
    update_mouse_position(make);
    update_mouse_animation(make);
    update_mouse_strike(make);
}