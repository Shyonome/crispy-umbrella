/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** draw_end_game
*/

#include "include.h"

void draw_end_game_sprite(all_maker_t *make)
{
    sfRenderWindow_drawSprite(make->window,
    make->background.end_game_sprite, NULL);
    sfRenderWindow_drawSprite(make->window,
    make->buttons.end_button_sprite, NULL);
    sfRenderWindow_drawSprite(make->window,
    make->mouse.menu_mouse_sprite, NULL);
}

void draw_end_game(all_maker_t *make)
{
    draw_end_game_sprite(make);
}