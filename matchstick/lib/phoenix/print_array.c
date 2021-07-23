/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** print_array
*/

#include "include/phoenix.h"

char **print_array(char **array)
{
    for (int y = 0; array[y] != NULL; y++) {
        for (int x = 0; array[y][x] != '\0'; x++) {
            my_putchar(array[y][x]);
        }
        my_putchar('\n');
    }
}