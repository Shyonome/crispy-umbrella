/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** draw_main_menu
*/

#include "include.h"

void draw_main_menu_text(all_maker_t *make)
{
    sfRenderWindow_drawText
    (make->window, make->buttons.start_button_text, NULL);
    sfRenderWindow_drawText
    (make->window, make->buttons.option_button_text, NULL);
    sfRenderWindow_drawText
    (make->window, make->buttons.exit_button_text, NULL);
}

void draw_main_menu_sprite(all_maker_t *make)
{
    sfRenderWindow_drawSprite
    (make->window, make->background.main_menu_sprite, NULL);
    sfRenderWindow_drawSprite
    (make->window, make->buttons.start_button_sprite, NULL);
    sfRenderWindow_drawSprite
    (make->window, make->buttons.option_button_sprite, NULL);
    sfRenderWindow_drawSprite
    (make->window, make->buttons.exit_button_sprite, NULL);
    sfRenderWindow_drawSprite
    (make->window, make->mouse.menu_mouse_sprite, NULL);
}

void draw_main_menu(all_maker_t *make)
{
    draw_main_menu_sprite(make);
}