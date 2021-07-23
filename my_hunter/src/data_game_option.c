/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** data_game_option
*/

#include "include.h"

void game_option_background(all_maker_t *make)
{
    make->background.game_option_sprite = sfSprite_create();
    make->background.game_option_texture =
    sfTexture_createFromFile(GAME_OPTION_BACKGROUND, NULL);
    sfSprite_setTexture(make->background.game_option_sprite,
    make->background.game_option_texture, sfFalse);
    make->background.game_option_size =
    sfTexture_getSize(make->background.game_option_texture);
}

void game_option_stop__button(all_maker_t *make)
{
    make->buttons.stop_button_sprite = sfSprite_create();
    make->buttons.stop_button_texture =
    sfTexture_createFromFile(STOP_BUTTON, NULL);
    make->buttons.stop_button_size =
    sfTexture_getSize(make->buttons.stop_button_texture);
    make->buttons.stop_button_rect = (sfIntRect){16, 16, 339, 137};
    sfSprite_setTextureRect(make->buttons.stop_button_sprite,
    make->buttons.stop_button_rect);
    sfSprite_setTexture(make->buttons.stop_button_sprite,
    make->buttons.stop_button_texture, sfFalse);
    make->buttons.stop_button_position = (sfVector2f){100.f, 400.f};
    sfSprite_setPosition(make->buttons.stop_button_sprite,
    make->buttons.stop_button_position);
    sfSprite_setScale(make->buttons.stop_button_sprite,
    (sfVector2f){1, 0.9});
}

void game_option_resume__button(all_maker_t *make)
{
    make->buttons.resume_button_sprite = sfSprite_create();
    make->buttons.resume_button_texture =
    sfTexture_createFromFile(RESUME_BUTTON, NULL);
    make->buttons.resume_button_size =
    sfTexture_getSize(make->buttons.resume_button_texture);
    make->buttons.resume_button_rect = (sfIntRect){0, 0, 340, 150};
    sfSprite_setTextureRect(make->buttons.resume_button_sprite,
    make->buttons.resume_button_rect);
    sfSprite_setTexture(make->buttons.resume_button_sprite,
    make->buttons.resume_button_texture, sfFalse);
    make->buttons.resume_button_position = (sfVector2f){100.f, 200.f};
    sfSprite_setPosition(make->buttons.resume_button_sprite,
    make->buttons.resume_button_position);
    sfSprite_setScale(make->buttons.resume_button_sprite,
    (sfVector2f){1, 0.9});
}