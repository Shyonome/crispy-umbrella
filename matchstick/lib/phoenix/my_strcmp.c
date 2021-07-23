/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** my_strcmp
*/

#include "include/phoenix.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}