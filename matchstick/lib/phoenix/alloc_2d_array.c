/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-isaak.nicolas
** File description:
** load_2d_arr_from_file
*/

#include "include/phoenix.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    int i = 0;
    char **saved_memory = malloc((sizeof(char *) * (nb_rows + 1)));
    if (saved_memory != NULL) {
        for (; i < nb_rows; i++)
            saved_memory[i] = malloc(sizeof(char) * (nb_cols + 1));
        saved_memory[i] = NULL;
        return (saved_memory);
    }
}