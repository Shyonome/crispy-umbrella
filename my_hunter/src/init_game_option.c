/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** init_option
*/

#include "include.h"

void init_game_option_button(all_maker_t *make)
{
    game_option_stop__button(make);
    game_option_resume__button(make);
}

void init_game_option(all_maker_t *make)
{
    game_option_background(make);
    init_game_option_button(make);
}