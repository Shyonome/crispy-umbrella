/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_putchar
*/

#include "include/my_printf.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}