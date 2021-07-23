/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** include
*/

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <SFML/Graphics.h>
#include <SFML/Graphics/Export.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/System/Vector3.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/Audio.h>
#include <stddef.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define VIDEO (32)
#define WIDTH (1920)
#define HEIGHT (1080)

#define MAIN_MENU_MUSIC ("assets/music/berzerkwav.wav")
#define LEVEL_ONE_MUSIC ("assets/music/wild_card.wav")
#define MAIN_MENU_BACKGROUND ("assets/pictures/main_menu.jpg")
#define GAME_OPTION_BACKGROUND ("assets/pictures/game_option_background.jpg")
#define LEVEL_ONE_BACKGROUND ("assets/pictures/level_one.jpg")
#define END_GAME_BACKGROUND ("assets/pictures/end_game.png")
#define PLAY_BUTTON ("assets/pictures/play_button.png")
#define OPTION_BUTTON ("assets/pictures/option_button.png")
#define STOP_BUTTON ("assets/pictures/stop_button.png")
#define RESUME_BUTTON ("assets/pictures/resume_button.png")
#define EXIT_BUTTON ("assets/pictures/exit_button.png")
#define END_BUTTON ("assets/pictures/end_button.png")
#define MAIN_MENU_FONT ("assets/font/Barbarian.ttf")
#define MENU_FONT ("assets/font/font.TTF")
#define MENU_CURSOR ("assets/pictures/menu_cursor.png")
#define GAME_CURSOR ("assets/pictures/cursor.png")
#define GHOST ("assets/pictures/ghost_sprite_sheet.png")

enum game_state {
    MAIN_MENU,
    GAME_OPTION,
    LEVEL_ONE,
    LEVEL_TWO,
    END_GAME
};

typedef struct target_s
{
    int ghost_scale;

    sfSprite *ghost_sprite;
    sfTexture *ghost_texture;
    sfIntRect ghost_rect;
    sfVector2f ghost_position;
    sfClock *ghost_clock;
} target_t;

typedef struct buttons_s
{
    sfSprite *start_button_sprite;
    sfTexture *start_button_texture;
    sfIntRect start_button_rect;
    sfVector2f start_button_position;
    sfVector2u start_button_size;
    sfText *start_button_text;

    sfSprite *option_button_sprite;
    sfTexture *option_button_texture;
    sfIntRect option_button_rect;
    sfVector2f option_button_position;
    sfVector2u option_button_size;
    sfText *option_button_text;

    sfSprite *stop_button_sprite;
    sfTexture *stop_button_texture;
    sfIntRect stop_button_rect;
    sfVector2f stop_button_position;
    sfVector2u stop_button_size;
    sfText *stop_button_text;

    sfSprite *resume_button_sprite;
    sfTexture *resume_button_texture;
    sfIntRect resume_button_rect;
    sfVector2f resume_button_position;
    sfVector2u resume_button_size;
    sfText *resume_button_text;

    sfSprite *exit_button_sprite;
    sfTexture *exit_button_texture;
    sfIntRect exit_button_rect;
    sfVector2f exit_button_position;
    sfVector2u exit_button_size;
    sfText *exit_button_text;

    sfSprite *end_button_sprite;
    sfTexture *end_button_texture;
    sfIntRect end_button_rect;
    sfVector2f end_button_position;
    sfVector2u end_button_size;
} buttons_t;

typedef struct mouse_s
{
    sfVector2f mouse_position;
    sfVector2f mouse_offset;

    sfSprite *menu_mouse_sprite;
    sfTexture *menu_mouse_texture;
    sfIntRect menu_mouse_rect;
    sfClock *menu_mouse_clock;

    sfSprite *game_mouse_sprite;
    sfTexture *game_mouse_texture;
} mouse_t;

typedef struct background_s
{
    sfSprite *main_menu_sprite;
    sfTexture *main_menu_texture;
    sfVector2u main_menu_size;

    sfSprite *game_option_sprite;
    sfTexture *game_option_texture;
    sfVector2u game_option_size;

    sfSprite *level_one_sprite;
    sfTexture *level_one_texture;
    sfVector2u level_one_size;

    sfSprite *level_two_sprite;
    sfTexture *level_two_texture;
    sfVector2u level_two_size;

    sfSprite *end_game_sprite;
    sfTexture *end_game_texture;
    sfVector2u end_game_size;
} background_t;

typedef struct all_maker_s
{
    sfRenderWindow *window;
    sfVideoMode video;
    sfTime time;
    sfEvent window_event;
    sfFont *buttons_font;
    sfFont *menu_font;
    sfText *score_text;
    sfMusic *main_menu_music;
    sfMusic *level_one_music;
    background_t background;
    mouse_t mouse;
    buttons_t buttons;
    target_t target;
    enum game_state game_state;
    int score;
    int end_game;
} all_maker_t;

//init_cursor.c
void game_cursor(all_maker_t *make);
void menu_cursor(all_maker_t *make);
void init_cursor(all_maker_t *make);

//data_end_game.c
void end_game_background(all_maker_t *make);
void end_game_button(all_maker_t *make);

//init_end_game.c
void init_end_game(all_maker_t *make);

//data_game_option.c
void game_option_stop__button(all_maker_t *make);
void game_option_resume__button(all_maker_t *make);
void game_option_background(all_maker_t *make);

//init_game_option.c
void game_option_button(all_maker_t *make);
void init_game_option(all_maker_t *make);

//data_level_one.c
void level_one_ghost(all_maker_t *make);
void level_one_background(all_maker_t *make);

//init_level_one.c
void init_level_one(all_maker_t *make);

//init_cursor.c
void init_cursor(all_maker_t *make);

//main_menu_text.c
void main_menu_exit_button_text(all_maker_t *make);
void main_menu_option_button_text(all_maker_t *make);
void main_menu_start_button_text(all_maker_t *make);

//data_main_menu.c
void main_menu_exit_button(all_maker_t *make);
void main_menu_option_button(all_maker_t *make);
void main_menu_start_button(all_maker_t *make);
void main_menu_background(all_maker_t *make);

//init_main_menu.c
void main_menu_buttons(all_maker_t *make);
void init_main_menu(all_maker_t *make);

//init_window.c
int init_window(all_maker_t *make);

//game_state.c
void update_game_states(all_maker_t *make);
void draw_game_state(all_maker_t *make);

//destroy_data.c
void destroy_end_game(all_maker_t *make);
void destroy_level_one(all_maker_t *make);
void destroy_game_option(all_maker_t *make);
void destroy_main_menu(all_maker_t *make);

//destroy.c
void destroy(all_maker_t *make);

//music.c
void level_one_music(all_maker_t *make);
void main_menu_music(all_maker_t *make);

//draw_end_game.c
void draw_end_game(all_maker_t *make);

//draw_game_option.c
void draw_game_option(all_maker_t *make);

//draw_level_one.c
void draw_level_one_ghost(all_maker_t *make);
void draw_level_one_target(all_maker_t *make);
void text_score(all_maker_t *make);
void draw_level_one_sprite(all_maker_t *make);
void draw_level_one(all_maker_t *make);

//draw_level_two.c
void draw_level_two(all_maker_t *make);

//draw_main_menu.c
void draw_main_menu_text(all_maker_t *make);
void draw_main_menu_sprite(all_maker_t *make);
void draw_main_menu(all_maker_t *make);

//draw.c
void draw_level_one(all_maker_t *make);
void draw_main_menu(all_maker_t *make);
void draw(all_maker_t *make);

//update_ghost
void update_ghost_state(all_maker_t *make);
void update_ghost_position(all_maker_t *make);
void update_ghost_animation(all_maker_t *make);
void update_ghost_target(all_maker_t *make);

//update_mouse.c
void update_mouse_strike(all_maker_t *make);
void update_mouse_animation(all_maker_t *make);
void update_mouse_position(all_maker_t *make);
void update_mouse(all_maker_t *make);

//update.c
void update(all_maker_t *make);

//init.c
void init(all_maker_t *make);

//select_game_option_button.c
void select_game_option_button(all_maker_t *make);

//select_end_game_button.c
void select_end_game_button(all_maker_t *make);

//select_main_menu_button.c
void select_main_menu_button(all_maker_t *make);

//recover_game_state.c
void recover_game_state(all_maker_t *make);

//run.c
int run(void);

//zakev.c
int my_random(int lower, int upper);
void my_putstr (char const *str);
void my_puchar (char c);

#endif
