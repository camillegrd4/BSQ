/*
** EPITECH PROJECT, 2019
** min
** File description:
** min
*/

#include "my.h"

int min_nbr(int *str)
{
    int nbr = 0;
    int i = 0;

    if (str[i] == 1) {
        if (str[i - 1] > 0 && str[i - intlen(str)] > 0
        && str[i - intlen(str) - 1] > 0)
        str[i] = str[i] + 1;
        else {
            str[i] = str[i];
        }
    }
    return (nbr);
}
