/*
** EPITECH PROJECT, 2019
** header
** File description:
** fill
*/

#include "matchstick.h"

int error_num_line(int num_line, char **map, int line)
{
    int res = 0;

    while (num_line > line || num_line <= 0 || line <= 0) {
        my_putstr("Error: this line is out of range");
        my_putchar('\n');
        res = get_input(map, line);
        return (res);
    }
    return (num_line);
}

int error_match(int nb_match, int num_line, int line)
{
    int nb_space_line = (line * 2) - 2 * num_line;
    int match_line = ((line * 2) - 1) - nb_space_line;

    if (nb_match <= 0) {
        my_putstr("Error: you have to remove at least one match");
        my_putchar('\n');
        return (84);
    }
    if (nb_match > match_line) {
        my_putstr("Error: not enough matches on this line");
        my_putchar('\n');
        return (84);
    }
    return (0);
}

int error_2match(int nb_match, char **map, int max_nb_match, int line)
{
    if (nb_match > max_nb_match) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(max_nb_match);
        my_putstr(" matches per turn");
        my_putchar('\n');
        return (84);
    }
    return (0);
}
