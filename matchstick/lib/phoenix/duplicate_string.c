/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** duplicate_string.c
*/

#include "include/phoenix.h"

char *duplicate_string(char const *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src));

    if (src == NULL)
        return NULL;
    else {
    for (int c = 0; src[c] != '\0'; c++) {
        dest[c] = src[c];
    }
    return (dest);
    }
}