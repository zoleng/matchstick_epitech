/*
** EPITECH PROJECT, 2019
** match
** File description:
** stick
*/

#include <stdlib.h>
#include "matchstick.h"

int delete3(void)
{
    my_putstr("Fail with the malloc");
    my_putchar('\n');
    return (84);
}

int delete2(int line, char **map, int i)
{
    for (int j = 0; j < i + 2 ; j++)
        free (map[j]);
    free (map);
    my_putstr("Fail with the malloc");
    my_putchar('\n');
    return (84);
}

int delete(int line, char **map)
{
    for (int i = 0; i < line + 2 ; i++)
        free (map[i]);
    free (map);
    return (0);
}
