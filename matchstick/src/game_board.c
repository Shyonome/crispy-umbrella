/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-bsmatchstick-isaak.nicolas
** File description:
** print_game_board
*/

#include "../include/include.h"

char **remove_pipe(all_maker_t *make, int line_pos, int nb_pick)
{
    int start = (make->remove_cols / 2);
    int reacher = make->remove_cols - 1;
    int count = 0;
    for (int y = 0, x = make->remove_cols -1; y != line_pos; y++) {
        if (y = line_pos - 1) {
            for (x = make->remove_cols - 1; make->game_map[y][x] != '|'; x--) {
                make->game_map[y][x] = ' ';
            }
            if (nb_pick <= count_pipe(make, line_pos)) {
                for (x; count != nb_pick; x--, count++)
                    make->game_map[y][x] = ' ';
            }
        }
    }
    return (make->game_map);
}

char **pipe_board(all_maker_t *make)
{
    make->game_map = space_board(make);
    int start = (make->cols / 2);
    int nb_stick = 1;
    int count = 0;
    for (int y = 1; y != make->rows - 1; y++) {
        for (int x = start; count != nb_stick; x++) {
            make->game_map[y][x] = '|';
            count += 1;
        }
        start -= 1;
        nb_stick += 2;
        count = 0;
    }
    return (make->game_map);
}

char **space_board(all_maker_t *make)
{
    make->game_map = star_board(make);
    for (int y = 1; y != make->rows - 1; y++)
        for (int x = 1; x != make->cols - 1; x++)
            make->game_map[y][x] = ' ';
    return (make->game_map);
}

char **star_board(all_maker_t *make)
{
    make->game_map = mem_alloc_2d_array(make->rows, make->cols);
    for (int y = 0, x = 0; y != make->rows; y++) {
        for (x = 0; x != make->cols; x++)
            make->game_map[y][x] = '*';
        make->game_map[y][x] = '\0';
    }
    make->game_map[make->rows] = NULL;
    return (make->game_map);
}