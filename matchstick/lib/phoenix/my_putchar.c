/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** my_putchar.c
*/

#include "include/phoenix.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}