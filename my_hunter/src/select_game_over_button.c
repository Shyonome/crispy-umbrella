/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** select_game_over_button
*/

#include "include.h"

void select_end_button(all_maker_t *make)
{
    if (make->window_event.mouseButton.x >= 760 &&
    make->window_event.mouseButton.x <= 1090 &&
    make->window_event.mouseButton.y >= 210 &&
    make->window_event.mouseButton.y <= 290) {
        make->game_state = MAIN_MENU;
    }
}

void select_end_game_button(all_maker_t *make)
{
    if (make->game_state == END_GAME &&
    make->window_event.type == sfEvtMouseButtonPressed &&
    make->window_event.mouseButton.button == sfMouseLeft) {
        select_end_button(make);
    }
}