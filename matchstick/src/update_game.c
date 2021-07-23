/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-bsmatchstick-isaak.nicolas
** File description:
** update_game
*/

#include "../include/include.h"

void ai_init(all_maker_t *make)
{
    player_lose(make);
    if (make->game_state == 0) {
        show_string("\nAI's turn...\n");
        ai_initialisation(make);
        player_win(make);
        if (make->game_state == 0) {
            make->current_state = 0;
            game_lines(make, make->ai.line_pos);
        }
    }
}

int game_check(all_maker_t *make)
{
    if (make->game_state != 0)
        return (make->game_state);
    else if (make->current_state == 0)
        show_string("\nYour turn:");
    show_string("\nLine: ");
}

int game_matches(all_maker_t *make, int line_pos)
{
    show_string("Matches: ");
    if (getline(&make->str, &make->length, stdin) != -1){
        if (match_management(make, my_atoi(make->str),
        count_pipe(make, line_pos)) != 84 &&
        int_checker(make) != 84) {
            player_intel(line_pos - 1, my_atoi(make->str));
            print_array(remove_pipe(make, line_pos, my_atoi(make->str)));
            ai_init(make);
            
        } else
            return (game_lines(make, line_pos));
    } else
        return (0);
}

int game_lines(all_maker_t *make, int line_pos)
{
    game_check(make);
    if (getline(&make->str, &make->length, stdin) != -1) {
        if (int_checker(make) != 84 &&
        line_management(make, my_atoi(make->str) + 1) != 84) {
            line_pos = my_atoi(make->str) + 1;
            make->current_state = 1;
            return (game_matches(make, line_pos));
        }
        else {
            make->current_state = 1;
            return (game_lines(make, line_pos));
        }
    } else
        return (0);
}

int update_board(all_maker_t *make)
{
    int line_pos = 0;
    while (game_state(make) == 0)
        if (game_lines(make, line_pos) == 0)
            return (0);
}