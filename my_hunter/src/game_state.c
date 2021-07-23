/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** game_state
*/

#include "include.h"

void update_music(all_maker_t *make)
{
    if (make->game_state != MAIN_MENU)
        sfMusic_stop(make->main_menu_music);
}

void update_to_end_game(all_maker_t *make)
{
    if (make->game_state == LEVEL_ONE && make->end_game <= 0) {
        make->end_game = 5;
        make->game_state = END_GAME;
    }
}

void update_game_states(all_maker_t *make)
{
    select_main_menu_button(make);
    select_game_option_button(make);
    select_end_game_button(make);
    recover_game_state(make);
    update_to_end_game(make);
    //update_music(make);
}

void draw_game_state(all_maker_t *make)
{
    switch (make->game_state) {
        case MAIN_MENU: draw_main_menu(make);
            break;
        case GAME_OPTION: draw_game_option(make);
            break;
        case LEVEL_ONE: draw_level_one(make);
            break;
        case LEVEL_TWO: draw_level_two(make);
            break;
        case END_GAME: draw_end_game(make);
            break;
    }
}