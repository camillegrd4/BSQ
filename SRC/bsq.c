/*
** EPITECH PROJECT, 2019
** main.C
** File description:
** main.c
*/

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
    write(1, buffer, my_strlen(buffer));
    free(save);
    free(str);
}

int bsq(int argc, char **argv)
{
    int op = 0;
    int size = 0;
    int rd = 0;
    struct stat buf;
    char *buffer = NULL;
    int *str = NULL;
    const char *path = argv[1];
    stat(path, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    str = malloc(sizeof(int) * (buf.st_size + 1));
    buffer[buf.st_size] = '\0';
    op = open(argv[1], O_RDONLY);
    rd = read(op, buffer, buf.st_size);
    if (op <= -1 || rd == 0)
        return (84);
    display_all(str, buffer, buf);
    return 0;
}