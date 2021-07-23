/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** free
*/

#include "../include/include.h"

int free_array(char **array)
{
    for (int y = 0; array[y] != NULL; y++)
        free(array[y]);
    free(array);
}