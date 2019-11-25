/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c);

int my_putint(int *str)
{
    int i = 0;

    while (str[i] != -2) {
        if (str[i - 1] == -1) {
            my_putchar('\n');
        }
        my_put_nbr(str[i]);
        i = i + 1;
    }
    my_put_nbr(-2);
    my_putchar('\n');
    return (0);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
