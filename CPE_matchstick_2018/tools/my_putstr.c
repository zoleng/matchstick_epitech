/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** my_putstr
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}

int	my_put_nbr(int nb)
{
    int	mod;

    if (nb < 0)
        {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0)
    {
        if (nb >= 10)
        {
        mod = (nb % 10);
        nb = (nb - mod) / 10;
        my_put_nbr(nb);
        my_putchar(48 + mod);
        }
        else
            my_putchar(48 + nb % 10);
    }
}