/*
** EPITECH PROJECT, 2019
** square
** File description:
** square
*/

#include "my.h"

int calc_square(char *buffer, int *str, int stock)
{
    int i = 0;
    int j = 0;
    stock = min_nbr(str, buffer);

    while (str[i] != str[stock]) {
        i = i + 1;
    }
    while (str[j] < str[i]) {
        buffer[j] = buffer[j + 1];
        j = j + 1;
        i = i + 1;
    }
    return (j);
}