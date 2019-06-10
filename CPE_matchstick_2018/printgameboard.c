/*
** EPITECH PROJECT, 2019
** norme
** File description:
** norme
*/

#include <stdlib.h>
#include "matchstick.h"

char **malloc_line(char **map, int line)
{
    int column = (line * 2) + 1;
    int i = 0;

    map = malloc(sizeof(char *) * (line + 2));
    if (!map)
        delete3();
    while (i != line + 2) {
        map[i] = malloc(sizeof(char) * column);
        if (!map)
            delete2(line, map, i);
        i = i + 1;
    }
    return (map);
}

char **print_star(char **map, int j, int column)
{
    for (int i = 0; i != column; i++)
        map[j][i] = '*';
    return (map);
}

char **create_map_2(char **map, int line, int match, int space)
{
    int i = 0;

    for (int j = 1; j != line + 1; j++) {
        i = 0;
        map[j][i] = '*';
        i = i + 1;
        spacer (j, i, map, space);
        i = counter(i, space);
        for (int x = 0; x != match; x++) {
            map[j][i] = '|';
            i = i + 1;
        }
        spacer (j, i, map, space);
        i = counter(i, space);
        map[j][i] = '*';
        space = space - 1;
        match = match + 2;
    }
    return (map);
}

char **create_map(char **map, int line)
{
    int i = 0;
    int j = 0;
    int match = 1;
    int space = ((line * 2) - 2) / 2;
    int column = line * 2 + 1;

    map = malloc_line(map, line);
    print_star(map, j, column);
    create_map_2(map, line, match, space);
    j = line + 1;
    print_star(map, j, column);
    return (map);
}

int print_board(char **map, int line, int column)
{
    for (int j = 0; j != line + 2; j++) {
        for (int i = 0; i != column; i++)
            my_putchar(map[j][i]);
        my_putchar('\n');
    }
    return (0);
}