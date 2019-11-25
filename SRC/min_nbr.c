/*
** EPITECH PROJECT, 2019
** min
** File description:
** min
*/

#include "my.h"
#include <stdio.h>

int min_nbr(int *str, char *buffer)
{
    int nbr = 0;
    int i = 0;
    int stock = 0;
    int gretter = 0;

    calc_algo(str, i);
    return (stock);
}

int greatest_number(int *str, char *buffer, int j)
{
    int stock = 0;
    int max = 0;
    j = 0;

    while (str[j] != -2) {
        if (stock <= str[j])
            stock = str[j];
        if (max < stock) {
            max = stock;
            stock = 0;
        }
        j++;
    }
    return (max);
}

int find_lenght_square(int *str, char *buffer, int j)
{
    int nbr_max = greatest_number(str, buffer, j);
    int lenght = j * nbr_max;
}

char *display_array(int *str, char *buffer)
{
    int i = 0;
    int j = calc_square(buffer, str);
    int nbr_max = greatest_number(str, buffer, j);
    int lenght = str[j] * nbr_max;

    while (buffer[j] < buffer[nbr_max]) {
        buffer[j] = 'x';
        j--;
    }
    return (buffer);
}