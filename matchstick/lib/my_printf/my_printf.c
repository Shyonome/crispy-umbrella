/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_printf
*/

#include "include/my_printf.h"

int find_index(char *tab, char element)
{
    for (int index = 0; tab [index]; index++) {
        if (tab [index] == element)
        return (index);
        }
        return (0);
}

int my_printf(char *src, ...)
{
    va_list my_list;
    int tmpindex;
    char tabindex [8] = {'c', 's', 'd', 'i', 'o', 'u', 'S', 0};
    void (*tabfunction [7]) (va_list *) = {my_char, my_str, my_nbr,
    my_nbr, my_oct, my_unsigned_nbr, my_big_sflags};

    va_start (my_list, src);
    for (int i = 0; src[i]; i++) {
        if (i != 0 && src[i - 1] == '%') {
            tmpindex = find_index(tabindex, src[i]);
            if (tmpindex != -1)
            (*tabfunction [tmpindex]) (&my_list);
            }
            else if (src[i] != '%')
            write (1, &src[i], 1);
            }
            va_end (my_list);
}