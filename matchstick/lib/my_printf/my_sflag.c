/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_sflag
*/

#include "include/my_printf.h"

void my_sflag(char *str)
{
    for (int i = 0; str[i]; i++) {
    my_putchar(str[i]);
    if (str[i] < 32 || str[i] > 126) {
        my_putchar('\\');
        my_octal(str[i]);
    }
    }
}