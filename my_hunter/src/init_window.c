/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** init_window
*/

#include "include.h"

int init_window(all_maker_t *make)
{
    make->video = (sfVideoMode){WIDTH, HEIGHT, VIDEO};
    make->window = sfRenderWindow_create
    (make->video, "KILLER_HEART", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(make->window, 60);
    sfMouse_getPosition(NULL);
    sfRenderWindow_setMouseCursorVisible(make->window, sfFalse);
    make->time = sfTime_Zero;
    make->game_state = MAIN_MENU;
    make->end_game = 5;
}