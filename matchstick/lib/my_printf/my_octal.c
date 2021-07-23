/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_octal
*/

#include "include/my_printf.h"

int my_octal(int nb)
{
    int octal = 0;
    int i = 1;

    if (nb < 0 || nb > 128) {
        my_printf(" Error: my_octal isn't stated for this number type");
        return (84);
    }
    else {
    while (nb != 0) {
        octal += (nb % 8) * i;
        nb /= 8;
        i *= 10;
    }
    my_put_nbr(octal);
    }
    return (0);
}