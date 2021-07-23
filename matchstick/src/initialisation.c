/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** initialisation
*/

#include "../include/include.h"

char **ai_initialisation(all_maker_t *make)
{
    make->ai.rows = my_atoi(make->av[1]);
    make->ai.line_pos = my_random(1, (my_atoi(make->av[1]) + 1));
    make->ai.nb_pick = my_random(1, my_atoi(make->av[2]));
    ai_remove_pipe(make);
}

all_maker_t *initialisation(char **av)
{
    all_maker_t *make = malloc(sizeof(all_maker_t));
    make->av = av;
    make->current_state = 0;
    make->game_state = 0;
    make->str = NULL;
    make->length = 0;
    make->rows = (my_atoi(av[1]) + 2);
    make->cols = (my_atoi(av[1]) * 2) + 1;
    make->remove_cols = (my_atoi(av[1]) * 2);
    make->max_pick = my_atoi(av[2]);
    make->game_map = pipe_board(make);
    return (make);
}