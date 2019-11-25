/*
** EPITECH PROJECT, 2019
** intlen
** File description:
** intlen
*/

#include "my.h"

int intlen(char *str, int i)
{
    int count;

    while (str[i] != '\n') {
        count++;
        i++;
    }
    count++;
    return (count);
}