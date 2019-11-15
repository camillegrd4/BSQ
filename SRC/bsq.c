/*
** EPITECH PROJECT, 2019
** bsq.c
** File description:
** bsq.c
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str);

int main(int argc, char **argv)
{
    int fd;
    int size;
    struct stat buf;
    char *buffer = NULL;
    const char *path = argv[1];

    stat(path, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size) + 1);
    buffer[buf.st_size] = '\0';
    fd = open(argv[1], O_RDONLY);
    read(fd, buffer, buf.st_size);
    my_putstr(buffer);
    return (0);
}