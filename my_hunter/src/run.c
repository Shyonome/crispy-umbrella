/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myhunter-isaak.nicolas
** File description:
** run.c
*/

#include "include.h"

int run(void)
{
    all_maker_t make;
    init(&make);
    while (sfRenderWindow_isOpen(make.window)) {
        update(&make);
        draw(&make);
    }
    destroy(&make);
}