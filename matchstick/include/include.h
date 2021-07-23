/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** include
*/

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include "../lib/phoenix/include/phoenix.h"
#include "../lib/my_printf/include/my_printf.h"

#include <time.h>

typedef struct ai_package_s
{
    int rows;
    int cols;
    int line_pos;
    int nb_pick;
} ai_package_t;

typedef struct all_maker_s
{
    char **av;
    char *str;
    char **game_map;

    int rows;
    int cols;
    int remove_rows;
    int remove_cols;
    int line;
    int max_pick;
    int game_state;
    int current_state;

    ssize_t get_line;
    size_t length;
    ai_package_t ai;
} all_maker_t;

int game_lines(all_maker_t *make, int line_pos);
int game_state(all_maker_t *make);

all_maker_t *initialisation(char **av);
char **print_game_map(all_maker_t *make);

int free_array(char **array);
int player_lose(all_maker_t *make);
int player_win(all_maker_t *make);
int my_random(int lower, int upper);

int case_management(all_maker_t *make, int nb_pick, int nb_pipe);

void ai_init(all_maker_t *make);
int ai_intels(int line_pos, int nb_pick);

char **ai_remove_pipe(all_maker_t *make);
char **ai_initialisation(all_maker_t *make);

int num_str(all_maker_t *make);
int int_checker(all_maker_t *make);

int count_all_pipe(all_maker_t *make);
int count_pipe(all_maker_t *make, int line_pos);

char **remove_pipe(all_maker_t *make, int line_pos, int nb_pick);

int player_intel(int line_pos, int nb_pick);

int match_management(all_maker_t *make, int nb_pick, int nb_pipe);
int line_management(all_maker_t *make, int line);

int game_statements(all_maker_t *make, int line_pos);
int update_board(all_maker_t *make);

char **pipe_board(all_maker_t *make);
char **space_board(all_maker_t *make);
char **star_board(all_maker_t *make);

int game_arch(all_maker_t *make);

#endif