/*
** EPITECH PROJECT, 2019
** check_win
** File description:
** check_win
*/

#include "matchstick.h"

int check_win3(int nb_total_match, int line, char **map)
{
    if ((nb_total_match) == 0) {
        my_putstr("You lost, too bad...");
        delete(line, map);
        my_putchar('\n');
        return (2);
    }
    return (-1);
}

int check_win4(int nb_total_match, int line, char **map)
{
    if ((nb_total_match) == 1) {
        delete(line, map);
        my_putstr("I lost...snif...but I'll get you next time!!");
        my_putchar('\n');
        return (1);
    }
    return (-1);
}