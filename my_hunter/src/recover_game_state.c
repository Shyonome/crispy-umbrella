/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** recover_game_state
*/

#include "include.h"

void recover_game_state(all_maker_t *make)
{
    if (make->game_state != MAIN_MENU &&
    sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        make->game_state = MAIN_MENU;
}