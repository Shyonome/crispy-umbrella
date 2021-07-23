/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** error_management
*/

#include "../include/include.h"

int num_str(all_maker_t *make)
{
    for (int i = 0; make->str[i] != '\0'; i++)
        if (make->str[i] >= '0' && make->str[i] <= '9')
            return (0);
        else
            return (84);
}

int int_checker(all_maker_t *make)
{
    if (make->str[0] == '-' || num_str(make) == 84) {
        show_string("Error: invalid input (positive number expected)");
        return (84);
    }
}

int following_match_management(all_maker_t *make, int nb_pick, int nb_pipe)
{
    if (nb_pick > nb_pipe || nb_pipe <= 0) {
        show_string("Error: not enough matches on this line");
        return (84);
    }
}

int match_management(all_maker_t *make, int nb_pick, int nb_pipe)
{
    if (nb_pick <= 0) {
        show_string("Error: you have to remove at least one match");
        return (84);
    }
    else if (nb_pick > my_atoi(make->av[2])) {
        show_string("Error: you cannot remove more than ");
        show_number(my_atoi(make->av[2]));
        show_string(" matches per turn");
        return (84);
    }
    else
        following_match_management(make, nb_pick, nb_pipe);
}

int line_management(all_maker_t *make, int line)
{
    if (line > make->rows || line <= 1) {
        show_string("Error: this line is out of range");
        return (84);
    }
}