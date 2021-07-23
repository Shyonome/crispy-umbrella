/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** intels
*/

#include "../include/include.h"

int ai_intels(int line_pos, int nb_pick)
{
    show_string("AI removed ");
    show_number(nb_pick);
    show_string(" match(es) from line ");
    show_number(line_pos);
    my_putchar('\n');
}

int player_intel(int line_pos, int nb_pick)
{
    show_string("Player removed ");
    show_number(nb_pick);
    show_string(" match(es) from line ");
    show_number(line_pos);
    my_putchar('\n');
}