/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** artificial_intelligence_rule
*/

#include "../include/include.h"

int ai_match_management(all_maker_t *make, int nb_pick, int nb_pipe)
{
    if (nb_pick <= 0) {
        return (84);
    }
    else if (nb_pick > my_atoi(make->av[2])) {
        return (84);
    }
    else if (nb_pick > nb_pipe || nb_pipe <= 0) {
        return (84);
    }
}

int ai_line_management(char **av, char **array, int line)
{
    int rows = my_atoi(av[1]) + 1;
    if (line > rows) {
        return (84);
    }
    if (line <= 0) {
        return (84);
    }
}

int case_management(all_maker_t *make, int nb_pick, int nb_pipe)
{
    return (ai_match_management(make, nb_pick, nb_pipe));
}