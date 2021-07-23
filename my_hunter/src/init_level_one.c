/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** init_level_one
*/

#include "include.h"

void init_level_one(all_maker_t *make)
{
    make->score = 0;
    level_one_background(make);
    level_one_ghost(make);
}