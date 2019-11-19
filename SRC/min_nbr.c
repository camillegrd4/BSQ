/*
** EPITECH PROJECT, 2019
** min
** File description:
** min
*/

#include "my.h"

int min_nbr(int *str, char *buffer)
{
    int nbr = 0;
    int i = 0;
    int stock = 0;


    i = intlen(str);
    if (str[i] == 1) {
        if (str[i - 1] > 0 && str[i - intlen(str)] > 0
        && str[i - intlen(str) - 1] > 0)
        stock = str[i] + 1;
        calc_sup(stock, str, buffer);
    }
    return (stock);
}

int calc_sup(int stock, int *str, char *buffer)
{
    int i = 0;
    int j = calc_square(buffer, str, stock);

    if (stock < str[i])
        stock = str[i];
    while (buffer[j] < stock) {
        buffer[j] = 'x';
        j = j + 1;
        }
}