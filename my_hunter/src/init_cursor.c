/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** init_cursor
*/

#include "include.h"

void game_cursor(all_maker_t *make)
{
    make->mouse.game_mouse_sprite = sfSprite_create();
    make->mouse.game_mouse_texture =
    sfTexture_createFromFile(GAME_CURSOR,
    &(sfIntRect){94, 23, 68, 68});
    sfSprite_setTexture(make->mouse.game_mouse_sprite,
    make->mouse.game_mouse_texture, sfFalse);
}

void menu_cursor(all_maker_t *make)
{
    make->mouse.menu_mouse_clock = sfClock_create();
    make->mouse.menu_mouse_sprite = sfSprite_create();
    make->mouse.menu_mouse_texture =
    sfTexture_createFromFile(MENU_CURSOR, NULL);
    make->mouse.menu_mouse_rect = (sfIntRect){0, 0, 69, 49};
    sfSprite_setTextureRect(make->mouse.menu_mouse_sprite,
    make->mouse.menu_mouse_rect);
    sfSprite_setTexture(make->mouse.menu_mouse_sprite,
    make->mouse.menu_mouse_texture, sfFalse);
}

void init_cursor(all_maker_t *make)
{
    menu_cursor(make);
    game_cursor(make);
}