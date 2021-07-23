/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** main
*/

#include "../include/include.h"

int game_state(all_maker_t *make)
{
    switch (make->game_state) {
        case 2:
            show_string("You lost, too bad...\n");
            return (2);
        case 1:
            show_string("I lost... snif... but I'll get you next time!!\n");
            return (1);
        case 0:
            return (0);
    }
}

int starter(all_maker_t *make)
{
    srandom(time(NULL));
    if (my_atoi(make->av[1]) > 1 && my_atoi(make->av[1]) < 100 &&
    my_atoi(make->av[2]) > 0) {
        print_array(make->game_map);
        return (update_board(make));
    }
    free_array(make->game_map);
}

int main(int ac, char **av)
{
    all_maker_t *make = initialisation(av);
    if (ac == 3 && make->av[1] != NULL && make->av[2] != NULL) {
        if (make->av[1][0] != '\0' && make->av[2][0] != '\0') {
            return (starter(make));
        } else
            return (84);
    } else
        return (84);
}