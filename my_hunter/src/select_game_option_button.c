/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** select_game_option_button
*/

#include "include.h"

void select_resume_button(all_maker_t *make)
{
    if (make->window_event.mouseButton.x >= 110 &&
    make->window_event.mouseButton.x <= 445 &&
    make->window_event.mouseButton.y >= 220 &&
    make->window_event.mouseButton.y <= 330) {
        sfMusic_play(make->main_menu_music);
    }
}

void select_stop_button(all_maker_t *make)
{
    if (make->window_event.mouseButton.x >= 110 &&
    make->window_event.mouseButton.x <= 445 &&
    make->window_event.mouseButton.y >= 410 &&
    make->window_event.mouseButton.y <= 520) {
        sfMusic_stop(make->main_menu_music);
    }
}

void select_game_option_button(all_maker_t *make)
{
    if (make->game_state == GAME_OPTION &&
    make->window_event.type == sfEvtMouseButtonPressed &&
    make->window_event.mouseButton.button == sfMouseLeft) {
        select_resume_button(make);
        select_stop_button(make);
    }
}