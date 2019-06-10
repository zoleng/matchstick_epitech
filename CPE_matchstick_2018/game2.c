/*
** EPITECH PROJECT, 2019
** gmae 2
** File description:
** game
*/

#include "matchstick.h"

void player_output(int nb_match, int num_line)
{
    my_putstr("Player removed ");
    my_put_nbr(nb_match);
    my_putstr(" match(es) from line ");
    my_put_nbr(num_line);
    my_putchar('\n');
}

void ia_output(void)
{
    my_putchar('\n');
    my_putstr("AI's turn ...");
    my_putchar('\n');
}

int check_win(int nb_total_match, int line, char **map)
{
    if ((nb_total_match) == 1) {
        my_putstr("You lost, too bad...");
        delete(line, map);
        my_putchar('\n');
        return (2);
    }
    return (-1);
}

int check_win2(int nb_total_match, int line, char **map)
{
    if ((nb_total_match) == 0) {
        delete(line, map);
        my_putstr("I lost...snif...but I'll get you next time!!");
        my_putchar('\n');
        return (1);
    }
    return (-1);
}

void game2(char **map, int line, int column, int nb_total_match)
{
    print_board(map, line, column);
    ia_output();
    ia(map, line, column);
    nb_total_match = count_matches(map, line, column);
    print_board(map, line, column);
    my_putchar('\n');
    my_putstr("Your turn:");
    my_putchar('\n');
}
