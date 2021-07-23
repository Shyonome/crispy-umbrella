/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** select_main_menu_button
*/

#include "include.h"

void select_start_button(all_maker_t *make)
{
    if (make->window_event.mouseButton.x >= 780 &&
    make->window_event.mouseButton.x <= 1150 &&
    make->window_event.mouseButton.y >= 220 &&
    make->window_event.mouseButton.y <= 330) {
        make->game_state = LEVEL_ONE;
    }
}

void select_option_button(all_maker_t *make)
{
    if (make->window_event.mouseButton.x >= 760 &&
    make->window_event.mouseButton.x <= 1180 &&
    make->window_event.mouseButton.y >= 410 &&
    make->window_event.mouseButton.y <= 520) {
        make->game_state = GAME_OPTION;
    }
}

void select_exit_button(all_maker_t *make)
{
    if (make->window_event.mouseButton.x >= 790 &&
    make->window_event.mouseButton.x <= 1155 &&
    make->window_event.mouseButton.y >= 617 &&
    make->window_event.mouseButton.y <= 733) {
        sfRenderWindow_close(make->window);
    }
}

void select_main_menu_button(all_maker_t *make)
{
    if (make->game_state == MAIN_MENU &&
    make->window_event.type == sfEvtMouseButtonPressed &&
    make->window_event.mouseButton.button == sfMouseLeft) {
        select_start_button(make);
        select_option_button(make);
        select_exit_button(make);
    }
}