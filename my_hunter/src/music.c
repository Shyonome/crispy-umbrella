/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** music
*/

#include "include.h"

void level_one_music(all_maker_t *make)
{
    make->level_one_music = sfMusic_createFromFile(LEVEL_ONE_MUSIC);
    sfMusic_play(make->level_one_music);
    sfMusic_setLoop(make->level_one_music, sfTrue);
}

void main_menu_music(all_maker_t *make)
{
    make->main_menu_music = sfMusic_createFromFile(MAIN_MENU_MUSIC);
    sfMusic_play(make->main_menu_music);
    sfMusic_setLoop(make->main_menu_music, sfTrue);
}