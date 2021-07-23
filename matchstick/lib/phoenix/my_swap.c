/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** my_swap.c
*/

#include "include/phoenix.h"

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}