/*
** EPITECH PROJECT, 2019
** square
** File description:
** square
*/

#include "my.h"
#include <stdio.h>

int calc_square(char *buffer, int *str)
{
    int i = 0;
    int j = 0;
    int max = greatest_number(str, buffer, j);

    while (str[i] != max) {
        i = i + 1;
    }
    i++;
    return (i);
}