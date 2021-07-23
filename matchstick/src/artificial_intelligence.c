/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** artificial_intelligence
*/

#include "../include/include.h"

char **ai_remove_pipe(all_maker_t *make)
{
    int management = case_management
    (make, make->ai.nb_pick, count_pipe(make, make->ai.line_pos));
    int start = (make->remove_cols / 2);
    int reacher = make->remove_cols - 1;
    int count = 0;
    if (management != 84) {
        for (int y = 1, x = make->remove_cols -1; y != make->ai.line_pos; y++) {
            if (y = make->ai.line_pos - 1) {
                for (x = make->remove_cols - 1; make->game_map[y][x] != '|'; x--)
                        make->game_map[y][x] = ' ';
                if (make->ai.nb_pick <= count_pipe(make, make->ai.line_pos))
                    for (x; count != make->ai.nb_pick; x--, count++)
                        make->game_map[y][x] = ' ';
            }
        }
        ai_intels(make->ai.line_pos - 1, make->ai.nb_pick);
        print_array(make->game_map);
    } else
        return (ai_initialisation(make));
}