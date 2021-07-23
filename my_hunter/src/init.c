/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** init
*/

#include "include.h"

void init_game(all_maker_t *make)
{
    init_window(make);
    init_cursor(make);
    init_main_menu(make);
    init_game_option(make);
    init_level_one(make);
    init_end_game(make);
}

void init(all_maker_t *make)
{
    init_game(make);
}