/*
** EPITECH PROJECT, 2019
** main.C
** File description:
** main.c
*/

#include "my.h"

int error(char *buffer)
{
    int number = my_getnbr(buffer);
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            number--;
        i++;
    }
    if (number != 0)
        return 1;
    return 0;
}

char display_all(int *str, char *buffer, struct stat buf)
{
    char *save;
    int i = 0;
    square(buffer, str);
    display_array(str, buffer);
    save = buffer;
    if (error(buffer) == 1)
        return 84;
    while (buffer[0] != '\n') {
        buffer += 1;
    }
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
    if (display_all(str, buffer, buf) == 84)
        return 84;
    return 0;
}