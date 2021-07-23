/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** fs_size_file
*/

#include "include/phoenix.h"

int size_file(char const *filepath)
{
    struct stat st;

    if (stat(filepath, &st) == 0)
    return (st.st_size);
    else
    return (-1);
}