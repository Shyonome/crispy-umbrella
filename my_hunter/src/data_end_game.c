/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** data_end_game
*/

#include "include.h"

void end_game_background(all_maker_t *make)
{
    make->background.end_game_sprite = sfSprite_create();
    make->background.end_game_texture =
    sfTexture_createFromFile(END_GAME_BACKGROUND, NULL);
    sfSprite_setTexture(make->background.end_game_sprite,
    make->background.end_game_texture, sfFalse);
    make->background.end_game_size =
    sfTexture_getSize(make->background.end_game_texture);
}

void end_game_button(all_maker_t *make)
{
    make->buttons.end_button_sprite = sfSprite_create();
    make->buttons.end_button_texture =
    sfTexture_createFromFile(END_BUTTON, NULL);
    make->buttons.end_button_size =
    sfTexture_getSize(make->buttons.end_button_texture);
    make->buttons.end_button_rect = (sfIntRect){76, 37, 328, 96};
    sfSprite_setTextureRect(make->buttons.end_button_sprite,
    make->buttons.end_button_rect);
    sfSprite_setTexture(make->buttons.end_button_sprite,
    make->buttons.end_button_texture, sfFalse);
    make->buttons.end_button_position = (sfVector2f){750.f, 200.f};
    sfSprite_setPosition(make->buttons.end_button_sprite,
    make->buttons.end_button_position);
    sfSprite_setScale(make->buttons.end_button_sprite,
    (sfVector2f){1, 0.9});
}