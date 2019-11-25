/*
** EPITECH PROJECT, 2019
** compa
** File description:
** compar
*/

#include "my.h"

int min_number(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

int min_number_tr(int *str, int i, int len_line)
{
    int a = str[i - 1];
    int b = str[i - len_line];
    int c = str[i - len_line - 1];
    int min = min_number(a, b);

    if (min < c)
        return (min);
    else
        return (c);
}

int calc_algo(int *str, int i)
{
    int max = 0;
    int value = 0;

    while (str[i] != -2) {
        if (str[i] > max)
            max = str[i];
        i++;
    }
    return (max);
}