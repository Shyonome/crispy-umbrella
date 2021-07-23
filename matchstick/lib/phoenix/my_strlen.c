/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** my_strlen
*/

#include "include/phoenix.h"

int my_strlen(char const *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    count++;
    return (count);
}