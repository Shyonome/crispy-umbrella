/*
** EPITECH PROJECT, 2020
** file_structure
** File description:
** show_number.c
*/

#include "include/phoenix.h"

int show_number(int nb)
{
    int	super_number;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        super_number = (nb % 10);
        nb = (nb - super_number) / 10;
        show_number(nb);
        my_putchar(48 + super_number);
        }
        else
        my_putchar(48 + nb % 10);
}