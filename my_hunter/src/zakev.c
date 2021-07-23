/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** zakev
*/

#include "include.h"

int my_random(int lower, int upper)
{
    int number = rand() % (upper - lower + 1) + lower;
    return (number);
}

void my_putchar (char c)
{
    write (1, &c, 1);
}

void my_putstr (char const *str)
{
    for (int i = 0; str[i]; i++)
    my_putchar (str[i]);
}