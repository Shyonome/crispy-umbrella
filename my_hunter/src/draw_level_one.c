/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** draw_level_one
*/

#include "include.h"

void draw_level_one_ghost(all_maker_t *make)
{
    sfRenderWindow_drawSprite
    (make->window, make->target.ghost_sprite, NULL);
}

void draw_level_one_target(all_maker_t *make)
{
    draw_level_one_ghost(make);
}

void draw_level_one_sprite(all_maker_t *make)
{
    sfRenderWindow_drawSprite
    (make->window, make->background.level_one_sprite, NULL);
    sfRenderWindow_drawText(make->window, make->score_text, NULL);
    draw_level_one_target(make);
    sfRenderWindow_drawSprite
    (make->window, make->mouse.game_mouse_sprite, NULL);
}

void draw_level_one(all_maker_t *make)
{
    draw_level_one_sprite(make);
}