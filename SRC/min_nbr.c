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

char *display_array(int *str, char *buffer)
{
    int i = -1;
    int j = calc_square(buffer, str);
    int stock = calc_square(buffer, str);
    int lenght = greatest_number(str, buffer, j) + 1;
    int nbr_max = greatest_number(str, buffer, j);
    int len_line;
    int nb = 1;

    while (buffer[++i] != '\n');
    j += i;
    stock += i;
    len_line = intlen(buffer, i + 1);
    while (--lenght > 0) {
        while (nbr_max > 0) {
            buffer[j--] = 'x';
            nbr_max -= 1;}
        nbr_max = greatest_number(str, buffer, j);
        j = stock - (nb * len_line);
        nb += 1;}
    return buffer;
}