/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** count_pipes
*/

#include "../include/include.h"

int count_all_pipe(all_maker_t *make)
{
    int nb_pipe = 0;
    for (int y = 1; y != make->rows - 1; y++) {
        for (int x = 1; x != make->cols -1; x++) {
            if (make->game_map[y][x] == '|')
                nb_pipe += 1;
        }
    }
    return (nb_pipe);
}

int count_pipe(all_maker_t *make, int line_pos)
{
    int nb_pipe = 0;
    for (int y = 1; y != line_pos; y++) {
        if (y = line_pos -1) {
            for (int x = 1; x != make->cols -1; x++) {
                if (make->game_map[y][x] == '|')
                    nb_pipe += 1;
            }
        }
    }
    return (nb_pipe);
}