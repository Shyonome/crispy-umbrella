/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** main
*/

#include "include.h"

void game_rule(void)
{
    my_putstr("\nHere are the rules of the game :\n");
    my_putstr("→ You must hit the targets before they reach the other side\n");
    my_putstr("→ You will lose health is you let them escape\n");
    my_putstr("→ You have a limited amount of munition\n");
    my_putstr("→ You will lose health if you miss the too many target\n");
    my_putstr("→ If you lose all your health, you die and it's game over\n\n");
    my_putstr("→ Press escape at any moment in order to return to the title\n");
}

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac == 1)
        run();
    else if (ac == 2 && av[1][0] == '-' &&
    av[1][1] == 'h')
        game_rule();
    else
        return (84);

}