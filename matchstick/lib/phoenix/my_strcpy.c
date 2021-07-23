/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** my_strcpy.c
*/

#include "include/phoenix.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int c = 0; dest[c] = src[c]; c++){
        dest[c] = src[c];
    }
    return (dest);
}