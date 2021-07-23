/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_strlen
*/

#include "include/my_printf.h"

int my_strlen(char const *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    count++;
    return (count);
}