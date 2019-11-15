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

int my_getnbr(char const *str);

//malloc buffer

int bsq(int fd, int size)
{

}

int main(int argc, char **argv)
{
    int i = 0;
    int size;
    struct stat *buf = malloc(sizeof(struct stat));
    char *buffer = malloc(sizeof(struct stat));
    const char *path = argv[1];
    stat(path, buf);
    printf("%d\n", buf->st_size);
    return (0);
}
//fd = open(argv[1], O_RDONLY);