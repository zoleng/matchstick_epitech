/*
** EPITECH PROJECT, 2019
** nb_matches
** File description:
** count
*/

int count_matches(char **map, int line, int column)
{
    int count = 0;

    for (int j = 0; j != line + 1; j++) {
        for (int i = 0; i != column; i++) {
            if (map[j][i] == '|')
                count = count + 1;
        }
    }
    return (count);
}
