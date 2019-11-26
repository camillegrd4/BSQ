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

char display_all(int *str, char *buffer, struct stat buf)
{
    char *save;

    square(buffer, str);
    display_array(str, buffer);
    save = buffer;
    while (buffer[0] != '\n')
        buffer += 1;
    buffer += 1;
    write(1, buffer, buf.st_size);
    my_putchar('\n');
    free(save);
}

int bsq(int argc, char **argv)
{
    int fd;
    int size;
    int nb;
    int i = 0;
    struct stat buf;
    char *buffer = NULL;
    int *str;
    const char *path = argv[1];

    stat(path, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    str = malloc(sizeof(int) * (buf.st_size + 1));
    buffer[buf.st_size] = '\0';
    fd = open(argv[1], O_RDONLY);
    nb = read(fd, buffer, buf.st_size);
    if (fd == -1 || nb == -1)
        return (84);
    display_all(str, buffer, buf);
    return (0);
}