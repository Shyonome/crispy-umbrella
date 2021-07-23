/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** is_prime_number.c
*/

#include "include/phoenix.h"

int is_prime_number(int nb)
{
    int o = 0;
    int i = 1;

    while (i <= nb) {
    if (nb %i == 0)
    o++;
    i++;
    } if (o == 2)
    return (1);
    else
    return (0);
}