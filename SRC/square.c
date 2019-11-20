/*
** EPITECH PROJECT, 2019
** bsq.c
** File description:
** bsq.c
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void my_putchar(char c);

int my_putstr(char const *str);

int my_algo(char *buffer, int *str)
{
    int i = 0;
    char nb;

    while (str[i] != -2) {
        str[i] = str[i] + intlen(str);
        if (str[i] > 0 && str[i - 1] > 0 && str[i - intlen(str)] > 0
                                        && str[i - intlen(str) - 1] > 0) {
        nb = min_nbr(str, buffer);
        }
        i = i + 1;
    }
}

void square(char *buffer, int *str)
{
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '.')
            str[i] = 1;
        if (buffer[i] == 'o')
            str[i] = 0;
        if (buffer[i] == '\n')
            str[i] = -1;
        i = i + 1;
    }
    str[i] = -2;
}