/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** show_double_string
*/

#include "include/phoenix.h"

void show_double_string(char **str)
{
    for (int i = 0; str[i] != NULL; i++)
        show_string(str[i]);
}