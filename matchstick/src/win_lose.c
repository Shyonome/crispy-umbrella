/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** win_lose
*/

#include "../include/include.h"

int player_lose(all_maker_t *make)
{
    if (count_all_pipe(make) == 0 && make->game_state != 1)
        make->game_state = 2;
}

int player_win(all_maker_t *make)
{
    if (count_all_pipe(make) == 0 && make->game_state != 2)
        make->game_state = 1;
}