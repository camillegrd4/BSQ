/*
** EPITECH PROJECT, 2019
** my_strlan.c
** File description:
** my_strlen.c
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int my_strlen_n(char *str)
{
    int i = 0;
    int value = 0;
    while (str[i] != '\n')
        i++;
    i++;
    while (str[i] != '\n') {
        value += 1;
        i++;
    }
    return value;
}