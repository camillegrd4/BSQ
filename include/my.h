/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int min_nbr(int *str, char *buffer);
void square(char *buffer, int *str);
int intlen(char *str, int i);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int calc_square(char *buffer, int *str);
char *display_array(int *str, char *buffer);
int bsq(int argc, char **argv);
int my_putint(int *str);
int min_number(int a, int b);
int min_number_tr(int *str, int i, int len_line);
int calc_algo(int *str, int i);
int find_lenght_square(int *str, char *buffer, int j);
int display_co(int *str, char *buffer, int j);
int greatest_number(int *str, char *buffer, int j);
int error(char *buffer);