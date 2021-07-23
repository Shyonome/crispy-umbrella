/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** destroy_game
*/

#include "include.h"

void destroy_end_game(all_maker_t *make)
{
    sfTexture_destroy(make->buttons.end_button_texture);
    sfTexture_destroy(make->background.end_game_texture);
    sfSprite_destroy(make->buttons.end_button_sprite);
    sfSprite_destroy(make->background.end_game_sprite);
}

void destroy_level_one(all_maker_t *make)
{
    sfClock_destroy(make->target.ghost_clock);
    sfTexture_destroy(make->target.ghost_texture);
    sfTexture_destroy(make->mouse.game_mouse_texture);
    sfTexture_destroy(make->background.level_one_texture);
    sfSprite_destroy(make->target.ghost_sprite);
    sfSprite_destroy(make->mouse.game_mouse_sprite);
    sfSprite_destroy(make->background.level_one_sprite);
}

void destroy_game_option(all_maker_t *make)
{
    sfTexture_destroy(make->buttons.resume_button_texture);
    sfText_destroy(make->buttons.stop_button_text);
    sfTexture_destroy(make->background.game_option_texture);
    sfSprite_destroy(make->buttons.resume_button_sprite);
    sfSprite_destroy(make->buttons.stop_button_sprite);
    sfSprite_destroy(make->background.game_option_sprite);
}

void destroy_main_menu(all_maker_t *make)
{
    sfMusic_destroy(make->main_menu_music);
    sfClock_destroy(make->mouse.menu_mouse_clock);
    sfTexture_destroy(make->buttons.exit_button_texture);
    sfTexture_destroy(make->buttons.option_button_texture);
    sfTexture_destroy(make->buttons.start_button_texture);
    sfTexture_destroy(make->mouse.menu_mouse_texture);
    sfTexture_destroy(make->background.main_menu_texture);
    sfSprite_destroy(make->buttons.exit_button_sprite);
    sfSprite_destroy(make->buttons.option_button_sprite);
    sfSprite_destroy(make->buttons.start_button_sprite);
    sfSprite_destroy(make->mouse.menu_mouse_sprite);
    sfSprite_destroy(make->background.main_menu_sprite);
}