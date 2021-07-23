/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-matchstick-isaak.nicolas
** File description:
** random
*/

#include "../include/include.h"

int my_random(int lower, int upper)
{
    int number = random() % (upper - lower + 1) + lower;
    return (number);
}