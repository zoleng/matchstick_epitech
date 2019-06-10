/*
** EPITECH PROJECT, 2019
** norme
** File description:
** yo
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "matchstick.h"

char **updates_board(int num_line, int nb_match, int line, char **map)
{
    int j = 0;
    int nb_space_line = (line * 2) - 2 * num_line;
    int nb_matches_line = ((line * 2) - 1) - nb_space_line;
    int pos_match = (line * 2) - (nb_space_line / 2) - 1;

    for (int i = 0; i < nb_match; i++) {
        j = i;
        if (map[num_line][pos_match - j] == ' ') {
            while (map[num_line][pos_match - j] == ' ') {
                j = j + 1;
            }
        }
        map[num_line][pos_match - j] = ' ';
    }
    return (map);
}

int get_input(char **map, int line)
{
    int res = 0;
    char *str1 = NULL;
    size_t n = 0;

    my_putstr("Line: ");
    if (getline(&str1, &n, stdin) == -1)
        return (-1);
    res = my_getnbr(str1);
    while (str1[0] < '0' || str1[0] > '9') {
        my_putstr("Error: invalid input (positive number expected)");
        my_putchar('\n');
        my_putstr("Line: ");
        if (getline(&str1, &n, stdin) == -1)
            return (-1);
        res = my_getnbr(str1);
    }
    res = error_num_line(res, map, line);
    free (str1);
    return (res);
}

int get_2input(void)
{
    char *str2 = NULL;
    size_t n = 0;
    int res = 0;

    my_putstr("Matches: ");
    if (getline(&str2, &n, stdin) == -1)
        return (-1);
    res = my_getnbr(str2);
    while (str2[0] < '0' || str2[0] > '9') {
        my_putstr("Error: invalid input (positive number expected)");
        my_putchar('\n');
        my_putstr("Matches: ");
        if (getline(&str2, &n, stdin) == -1)
            return (-1);
        res = my_getnbr(str2);
    }
    free (str2);
    return (res);
}

int matchstick(int line, int max_nb_match, int num_line, int nb_match)
{
    char **map = create_map(map, line);
    int column = line * 2 + 1;
    int nb_total_match = 1;

    game3(map, line, column);
    while (nb_total_match > 0) {
        num_line = get_input(map, line);
        nb_match = get_2input();
        while ((error_match(nb_match, num_line, line) == 84) ||
        (error_2match(nb_match, map, max_nb_match, line) == 84)) {
                num_line = get_input(map, line);
                nb_match = get_2input();
        }
        map = updates_board(num_line, nb_match, line, map);
        nb_total_match = count_matches(map, line, column);
        if (check_win2(nb_total_match, line, map) == 1)
            return (1);
        if (check_win(nb_total_match, line, map) == 2)
            return (2);
        player_output(nb_match, num_line);
        game2(map, line, column, nb_total_match);
        if (check_win3(nb_total_match, line, map) == 1)
            return (1);
        if (check_win4(nb_total_match, line, map) == 2)
            return (2);
    }
}
