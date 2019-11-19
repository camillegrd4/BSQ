/*
** EPITECH PROJECT, 2019
** intlen
** File description:
** intlen
*/

#include "my.h"

int intlen(int const *str)
{
    int i = 0;

    while (str[i] != -1) {
        i = i + 1;
    }
    return (i + 1);
}