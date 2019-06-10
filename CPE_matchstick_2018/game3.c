/*
** EPITECH PROJECT, 2019
** game3
** File description:
** game3
*/

#include "matchstick.h"

void game3(char **map, int line, int column)
{
    print_board(map, line, column);
    my_putchar('\n');
    my_putstr("Your turn:");
    my_putchar('\n');
}