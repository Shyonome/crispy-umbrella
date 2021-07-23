/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** update_ghost
*/

#include "include.h"

void update_ghost_state(all_maker_t *make)
{
    make->target.ghost_scale = my_random(1, 2);
    sfSprite_setScale(make->target.ghost_sprite,
    (sfVector2f){make->target.ghost_scale, make->target.ghost_scale});
    make->target.ghost_position.y = my_random(100, 600);
    make->target.ghost_position.x = my_random(-500, -100);
}

void update_ghost_position(all_maker_t *make)
{
    if (make->game_state == LEVEL_ONE &&
    make->target.ghost_position.x >= 1920)
        make->end_game -= 1;
    if (make->target.ghost_position.x <= 1920)
        make->target.ghost_position.x =
        make->target.ghost_position.x + my_random(1, 20);
    else
        update_ghost_state(make);
    make->target.ghost_position.x -= sfTime_asSeconds(make->time) * 300;
    sfSprite_setPosition (make->target.ghost_sprite,
    make->target.ghost_position);
}

void update_ghost_animation(all_maker_t *make)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime
    (make->target.ghost_clock)) >= 0.15) {
        make->target.ghost_rect.left += 67;
        switch (make->target.ghost_rect.left) {
            case 337: make->target.ghost_rect.left += 55;
            case 392: make->target.ghost_rect.left += 58;
            case 450: make->target.ghost_rect.left += 65;
        }
        if (make->target.ghost_rect.left >= 515)
            make->target.ghost_rect.left = 136;
        sfSprite_setTextureRect(make->target.ghost_sprite,
        make->target.ghost_rect);
        sfClock_restart(make->target.ghost_clock);
    }
}

void update_ghost_target(all_maker_t *make)
{
    update_ghost_animation(make);
    update_ghost_position(make);
}