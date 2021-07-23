/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_printf_function_use_two
*/

#include "include/my_printf.h"

void my_big_sflags(va_list *my_list)
{
    char *str = va_arg(*my_list, char *);

    my_sflag(str);
}