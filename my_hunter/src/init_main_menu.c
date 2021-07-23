/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** init_main_menu
*/

#include "include.h"

void main_menu_buttons(all_maker_t *make)
{
    main_menu_start_button(make);
    main_menu_option_button(make);
    main_menu_exit_button(make);
}

void init_main_menu(all_maker_t *make)
{
    main_menu_music(make);
    main_menu_background(make);
    main_menu_buttons(make);
}