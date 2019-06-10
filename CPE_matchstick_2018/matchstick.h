/*
** EPITECH PROJECT, 2019
** .h
** File description:
** match.h
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

void my_putchar(char c);
int my_putstr(char const *str);

int my_put_nbr(int nb);

int my_getnbr(char *str);

char **malloc_line(char **map, int line);
char **print_star(char **map, int j, int column);
char **create_map_2(char **map, int line, int match, int space);
char **create_map(char **map, int line);
int print_board(char **map, int line, int column);

int error_num_line(int num_line, char **map, int line);
int error_nb_matchs_inf1(int nb_match, char **map, int line);
int error_match(int nb_match, int num_line, int line);
int error_2match(int nb_match, char **map, int max_match, int line);

int delete(int line, char **map);
int delete2(int line, char **map, int i);
int delete3(void);

int matchstick(int line, int max_nb_match, int num_line, int nb_match);
char **updates_board(int num_line, int nb_matche, int line, char **map);
int get_input(char **map, int line);
int get_2input(void);

int main(int av, char *ac[]);

int count_matches(char **map, int line, int column);

int ia(char **map, int line, int column);

void player_output(int nb_match, int num_line);
void ia_output(void);
int check_win(int nb_total_match, int line, char **map);
int check_win2(int nb_total_match, int line, char **map);
void game2(char **map, int line, int column, int nb_total_match);

char **spacer(int j, int i, char **map, int space);
int counter(int i, int space);

int check_win3(int nb_total_match, int line, char **map);
int check_win4(int nb_total_match, int line, char **map);

void game3(char **map, int line, int column);

#endif
