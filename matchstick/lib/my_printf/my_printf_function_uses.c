/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_printf_function_use
*/

#include "include/my_printf.h"

void my_char(va_list *my_list)
{
    char c = va_arg(*my_list, int);

    my_putchar(c);
}

void my_str(va_list *my_list)
{
    char *str = va_arg(*my_list, char *);

    my_putstr (str);
}

void my_nbr(va_list *my_list)
{
    int nb = va_arg(*my_list, int);

    my_put_nbr(nb);
}

void my_unsigned_nbr(va_list *my_list)
{
    int nb = va_arg(*my_list, int);

    if (nb < 0)
    my_putstr ("Error: my_unsigned_printf_nbr is stated for positive numbers");
    else {
    my_put_nbr(nb);
    }
}

void my_oct(va_list *my_list)
{
    int nb = va_arg(*my_list, int);

    my_octal(nb);
}