##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC =		SRC/bsq.c \
		SRC/my_putchar.c \

CFLAGS	=	-I../include

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

re:	fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
