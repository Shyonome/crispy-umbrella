/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** show_string.c
*/

#include "include/phoenix.h"

void show_string(char *str)
{
    for (int i = 0; str[i]; i++)
    my_putchar(str[i]);
}