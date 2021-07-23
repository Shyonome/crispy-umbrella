/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** phoenix
*/

#ifndef _PHOENIX_H
#define _PHOENIX_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);
char *reverse_string(char *str);
void show_string(char *str);
void show_double_string(char **str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *concat_strings(char *dest, char const *src);
char *duplicate_string(char const *src);
char **my_str_to_word_array(char const *str);
char **print_array(char **array);
int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2 , int n );
char *my_strstr(char *str, char const *to_find);
int is_alpha(char c);
int is_num_stack_two(char c);
int is_num(char c);
int alpha_num_str(char *str);

int show_number(int nb);
int my_atoi(char *str);
int to_number(char const *str);
int is_prime_number(int nb);
char *concat_parameters(int ac, char **av);

int size_file(char const *filepath);

char **mem_alloc_2d_array(int nb_rows, int nb_cols);

#endif
