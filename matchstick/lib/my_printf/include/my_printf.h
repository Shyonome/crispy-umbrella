/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
** File description:
** my_printf.h
*/

#ifndef _MY_PRINTF_H_
#define _MY_PRINTF_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_octal (int nb);

void my_sflag(char *str);
void my_char(va_list *my_list);
void my_str(va_list *my_list);
void my_nbr(va_list *my_list);
void my_unsigned_nbr(va_list *my_list);
void my_oct(va_list *my_list);
void my_big_sflags(va_list *my_list);
int my_printf(char *src, ...);

#endif