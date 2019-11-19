/*
** EPITECH PROJECT, 2019
** main.C
** File description:
** main.c
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int main(int argc, char **argv)
{
    int fd;
    int size;
    int i = 0;
    struct stat buf;
    char *buffer = NULL;
    int *str;
    const char *path = argv[1];

    stat(path, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    str = malloc(sizeof(char) * (buf.st_size + 1));
    buffer[buf.st_size] = '\0';
    fd = open(argv[1], O_RDONLY);
    read(fd, buffer, buf.st_size);
    bsq(buffer, str);
    min_nbr(str, buffer);
    my_putstr(buffer);
    free(buffer);
    return (0);
}