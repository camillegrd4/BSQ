/*
** EPITECH PROJECT, 2019
** square
** File description:
** square
*/

#include "my.h"
#include <stdio.h>

int calc_square(char *buffer, int *str, int stock)
{
    int i = 0;
    int j = 0;
    stock = min_nbr(str, buffer);

    while (str[i] != str[stock]) {
        i = i + 1;
    }
    return (i);
}