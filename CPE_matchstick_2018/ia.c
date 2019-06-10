/*
** EPITECH PROJECT, 2019
** yo
** File description:
** zegema bitch
*/

#include "matchstick.h"

int ia(char **map, int line, int column)
{
    int num_line = 1;

    line = line + 1;
    column = column - 1;
    for (int j = line; j > 0; j--) {
        num_line = num_line + 1;
        for (int i = column; i > 0; i--) {
            if (map[j][i] == '|') {
                map[j][i] = ' ';
                my_putstr("AI removed 1 match(es) from line ");
                my_put_nbr(num_line);
                my_putchar('\n');
                return (0);
            }
        }
    }
    return (0);
}
