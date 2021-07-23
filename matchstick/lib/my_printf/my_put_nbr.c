/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_put_nbr
*/

#include "include/my_printf.h"

int my_put_nbr(int nb)
{
    int	super_number;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        super_number = (nb % 10);
        nb = (nb - super_number) / 10;
        my_put_nbr(nb);
        my_putchar(48 + super_number);
        }
        else
        my_putchar(48 + nb % 10);
}