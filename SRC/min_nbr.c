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

    while (str[i] != -1)
        i += 1;
    i += 1;
    while (str[i] != -2) {
        if (str[i] > 0) {
            gretter = comparison_function(str);
            if (stock <= gretter)
                stock = gretter + 1;
                } else if (stock >= gretter)
                    stock = stock + 1;
            i = i + 1;
            }
    printf("gretter:%i\n", gretter);
    printf("stock:%i\n", stock);
    return (stock);
}

char *calc_sup(int *str, char *buffer)
{
    int i = 0;
    int stock = min_nbr(str, buffer);
    int j;
    int square = 0;

    while (buffer[j] != str[stock]) {
        if (str[j] == -1) {
            j = 0;
        }
        my_putchar('x');
        j = j + 1;
    }
    return (buffer);
}