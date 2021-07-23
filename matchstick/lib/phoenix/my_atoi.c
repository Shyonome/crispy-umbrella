/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-bsmatchstick-isaak.nicolas
** File description:
** my_atoi
*/

#include "include/phoenix.h"

int my_atoi(char *str)
{
    int my_atoi = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9')
        my_atoi = my_atoi * 10 + str[i] - '0';
    }
    return (my_atoi);
}