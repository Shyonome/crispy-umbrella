/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** data
*/

#include "include.h"

void main_menu_background(all_maker_t *make)
{
    make->buttons_font = sfFont_createFromFile(MAIN_MENU_FONT);
    make->background.main_menu_sprite = sfSprite_create();
    make->background.main_menu_texture =
    sfTexture_createFromFile(MAIN_MENU_BACKGROUND, NULL);
    sfSprite_setTexture(make->background.main_menu_sprite,
    make->background.main_menu_texture, sfFalse);
    make->background.main_menu_size =
    sfTexture_getSize(make->background.main_menu_texture);
}

void main_menu_start_button(all_maker_t *make)
{
    make->buttons.start_button_sprite = sfSprite_create();
    make->buttons.start_button_texture =
    sfTexture_createFromFile(PLAY_BUTTON, NULL);
    make->buttons.start_button_size =
    sfTexture_getSize(make->buttons.start_button_texture);
    make->buttons.start_button_rect = (sfIntRect){0, 0, 512, 217};
    sfSprite_setTextureRect(make->buttons.start_button_sprite,
    make->buttons.start_button_rect);
    sfSprite_setTexture(make->buttons.start_button_sprite,
    make->buttons.start_button_texture, sfFalse);
    make->buttons.start_button_position = (sfVector2f){730.f, 200.f};
    sfSprite_setPosition(make->buttons.start_button_sprite,
    make->buttons.start_button_position);
    sfSprite_setScale(make->buttons.start_button_sprite,
    (sfVector2f){1, 0.9});
}

void main_menu_option_button(all_maker_t *make)
{
    make->buttons.option_button_sprite = sfSprite_create();
    make->buttons.option_button_texture =
    sfTexture_createFromFile(OPTION_BUTTON, NULL);
    make->buttons.option_button_size =
    sfTexture_getSize(make->buttons.option_button_texture);
    make->buttons.option_button_rect = (sfIntRect){0, 0, 512, 155};
    sfSprite_setTextureRect(make->buttons.option_button_sprite,
    make->buttons.option_button_rect);
    sfSprite_setTexture(make->buttons.option_button_sprite,
    make->buttons.option_button_texture, sfFalse);
    make->buttons.option_button_position = (sfVector2f){710.f, 365.f};
    sfSprite_setPosition(make->buttons.option_button_sprite,
    make->buttons.option_button_position);
    sfSprite_setScale(make->buttons.option_button_sprite,
    (sfVector2f){1, 1.3});
}

void main_menu_exit_button(all_maker_t *make)
{
    make->buttons.exit_button_sprite = sfSprite_create();
    make->buttons.exit_button_texture =
    sfTexture_createFromFile(EXIT_BUTTON, NULL);
    make->buttons.exit_button_size =
    sfTexture_getSize(make->buttons.exit_button_texture);
    make->buttons.exit_button_rect = (sfIntRect){0, 0, 512, 217};
    sfSprite_setTextureRect(make->buttons.exit_button_sprite,
    make->buttons.exit_button_rect);
    sfSprite_setTexture(make->buttons.exit_button_sprite,
    make->buttons.exit_button_texture, sfFalse);
    make->buttons.exit_button_position = (sfVector2f){720.f, 580.f};
    sfSprite_setPosition(make->buttons.exit_button_sprite,
    make->buttons.exit_button_position);
    sfSprite_setScale(make->buttons.exit_button_sprite,
    (sfVector2f){1, 0.9});
}