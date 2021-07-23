/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** text_score
*/

#include "include.h"

void text_score(all_maker_t *make)
{
    const char *score = "SCORE";
    make->score_text = sfText_create();
    sfText_setString(make->score_text, score);
    sfText_setCharacterSize(make->score_text, 40);
    sfText_setColor(make->score_text, sfWhite);
    sfText_setFont(make->score_text,
    make->buttons_font);
    sfText_setPosition(make->score_text,
    (sfVector2f){100.f, 10.f});
}