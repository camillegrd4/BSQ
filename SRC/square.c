/*
** EPITECH PROJECT, 2019
** bsq.c
** File description:
** bsq.c
*/

#include "my.h"

int first_co_li(char *buffer, int *str, int i, int j)
{
        if (buffer[i] == '.')
            str[j] = 1;
        if (buffer[i] == 'o')
            str[j] = 0;
        if (buffer[i] == '\n')
            str[j] = -1;
}

void square(char *buffer, int *str)
{
    int i = 0;
    int j = 0;
    int line = 0;
    int len_line;

    while (buffer[i] != '\n')
        i += 1;
    i += 1;
    len_line = intlen(buffer, i);
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            line += 1;
        if (line > 0 && buffer[i - 1] != '\n' && buffer[i] == '.')
            str[j] = min_number_tr(str, j, len_line) + 1;
        else {
            first_co_li(buffer, str, i, j);
        }
        i++;
        j++;
        } str[j] = -2;
}