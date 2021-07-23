/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** level_one_data
*/

#include "include.h"

void level_one_background(all_maker_t *make)
{
    make->menu_font = sfFont_createFromFile(MENU_FONT);
    make->background.level_one_sprite = sfSprite_create();
    make->background.level_one_texture =
    sfTexture_createFromFile(LEVEL_ONE_BACKGROUND, NULL);
    sfSprite_setTexture(make->background.level_one_sprite,
    make->background.level_one_texture, sfFalse);
    make->background.level_one_size =
    sfTexture_getSize(make->background.level_one_texture);
    text_score(make);
}

void level_one_ghost(all_maker_t *make)
{
    make->target.ghost_clock = sfClock_create();
    make->target.ghost_sprite = sfSprite_create();
    make->target.ghost_texture =
    sfTexture_createFromFile(GHOST, NULL);
    make->target.ghost_rect = (sfIntRect){136, 102, 45, 43};
    sfSprite_setTextureRect(make->target.ghost_sprite,
    make->target.ghost_rect);
    sfSprite_setTexture(make->target.ghost_sprite,
    make->target.ghost_texture, sfFalse);
    make->target.ghost_scale = my_random(1, 2);
    sfSprite_setScale(make->target.ghost_sprite,
    (sfVector2f){make->target.ghost_scale, make->target.ghost_scale});
    make->target.ghost_position =
    (sfVector2f){my_random(-500, -100), my_random(100, 600)};
    sfSprite_setPosition(make->target.ghost_sprite,
    make->target.ghost_position);
}