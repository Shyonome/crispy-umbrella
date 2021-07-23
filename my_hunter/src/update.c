/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** update
*/

#include "include.h"

void update_target(all_maker_t *make)
{
    update_ghost_target(make);
}

void game_loop(all_maker_t *make)
{
    while (sfRenderWindow_pollEvent(make->window, &(make->window_event))) {
        if (make->window_event.type == sfEvtClosed)
            sfRenderWindow_close(make->window);
        update_game_states(make);
    }
}

void update(all_maker_t *make)
{
    game_loop(make);
    update_mouse(make);
    update_target(make);
}