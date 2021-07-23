/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** to_number.c
*/

#include "include/phoenix.h"

int to_number(char const *str)
{
    int p = 1;
    int o;
    for (int i = 0; str[i]; i++) {
        for (o = str[i]; o >= - 1; o--)
        if (str[o] == is_num(str[o])) {
            p *= 10;
            return (str[o]);
        }
    }
}