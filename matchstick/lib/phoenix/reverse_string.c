/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** reverse_string.c
*/

#include "include/phoenix.h"

char *reverse_string(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    for (int p = str[i]; p >= - 1; p--)
    my_putchar (str[p]);
    return (0);
}