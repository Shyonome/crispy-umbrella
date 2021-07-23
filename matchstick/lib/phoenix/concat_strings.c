/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** concat_strings
*/

#include "include/phoenix.h"

char *concat_strings(char *dest, char const *src)
{
    char *begin = dest;
    while (*dest)
    dest++;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    return (begin);
}