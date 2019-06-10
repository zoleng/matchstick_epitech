/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "matchstick.h"

int main (int ac, char *av[])
{
    if (ac != 3) {
        my_putstr("ERROR : wrong number of arguments");
        my_putchar('\n');
        return (84);
    }
    int line = my_getnbr(av[1]);
    int max_matches = my_getnbr(av[2]);
    int num_line = 0;
    int nb_match =  0;

    matchstick(line, max_matches, num_line, nb_match);
    return (0);
}
