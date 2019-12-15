/*
** EPITECH PROJECT, 2019
** my_strlan.c
** File description:
** my_strlen.c
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}