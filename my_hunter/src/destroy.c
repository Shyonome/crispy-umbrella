/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** destroy
*/

#include "include.h"

void destroy_game(all_maker_t *make)
{
    destroy_level_one(make);
    destroy_game_option(make);
    destroy_main_menu(make);
    sfRenderWindow_destroy(make->window);
}

void destroy(all_maker_t *make)
{
    destroy_game(make);
}