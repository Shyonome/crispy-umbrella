/*
** EPITECH PROJECT, 2021
** file_structure
** File description:
** my_str_to_word_array
*/

#include "include/phoenix.h"

int is_separator(char c)
{
    if (c == ' ' || c == '\0')
        return (1);
    else
        return (0);
}

int get_word_number(char const *str)
{
    int res = 0;
    int is_checking = 0;

    for (int i = 0; str[i]; i++) {
        if (is_separator(str[i]) == 0 && !is_checking) {
            res += 1;
            is_checking = 1;
        }
        else if (is_checking && is_separator(str[i]) == 1) {
            is_checking = 0;
        }
    }
    return (res);
}

int get_wordlen(char const *str, int i)
{
    int len = 0;

    while (str[i]) {
        while (is_separator(str[i]) == 0) {
            len++;
            i += 1;
        }
        if (is_separator(str[i]) == 1 && len != 0)
            return (len);
        i += 1;
    }
    return (len);
}

char *fill_tab(char const *str, int *pos)
{
    int wordlen = get_wordlen(str, *pos);
    int old_pos = *pos;
    char *result = malloc(sizeof(char) * wordlen + 1);
    int i = 0;

    while (str[*pos]) {
        while (is_separator(str[*pos]) == 0) {
            result[i] = str[*pos];
            i++;
            *pos += 1;
        }
        if (i != 0)
            break;
        *pos += 1;
    }
    result[i] = '\0';
    return (result);
}

char **my_str_to_word_array(char const *str)
{
    int nb_word = get_word_number(str);
    char **tab = malloc(sizeof(char *) * (nb_word + 1));
    int pos = 0;

    for (int j = 0; j != nb_word; j++) {
        tab[j] = fill_tab(str, &pos);
    }
    tab[nb_word] = NULL;
    return (tab);
}