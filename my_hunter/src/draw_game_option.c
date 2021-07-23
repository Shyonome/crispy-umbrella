/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** draw_game_option
*/

#include "include.h"

void draw_game_option_sprite(all_maker_t *make)
{
    sfRenderWindow_drawSprite
    (make->window, make->background.game_option_sprite, NULL);
    sfRenderWindow_drawSprite(make->window,
    make->buttons.stop_button_sprite, NULL);
    sfRenderWindow_drawSprite(make->window,
    make->buttons.resume_button_sprite, NULL);
    sfRenderWindow_drawSprite(make->window,
    make->mouse.menu_mouse_sprite, NULL);
}

void draw_game_option(all_maker_t *make)
{
    draw_game_option_sprite(make);
}