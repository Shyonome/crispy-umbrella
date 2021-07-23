/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** draw
*/

#include "include.h"

void draw_game(all_maker_t *make)
{
    sfRenderWindow_clear(make->window, sfBlack);
    draw_game_state(make);
    sfRenderWindow_display(make->window);
}

void draw(all_maker_t *make)
{
    draw_game(make);
}