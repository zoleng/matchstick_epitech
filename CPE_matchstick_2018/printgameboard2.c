/*
** EPITECH PROJECT, 2019
** gmae board 2
** File description:
** game board 2
*/

#include "matchstick.h"

char **spacer(int j, int i, char **map, int space)
{
    for (int x = 0; x != space; x++) {
        map[j][i] = ' ';
        i = i + 1;
    }
    return (map);
}

int counter(int i, int space)
{
    for (int x = 0 ; x < space; x++)
        i = i + 1;
    return (i);
}
