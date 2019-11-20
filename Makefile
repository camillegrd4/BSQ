##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=		SRC/bsq.c \
			SRC/my_putchar.c \
			SRC/my_getnbr.c \
			SRC/my_put_nbr.c \
			SRC/my_putstr.c \
			SRC/my_strlen.c \
			SRC/min_nbr.c \
			SRC/main.c \
			SRC/intlen.c \
			SRC/calc_square.c \
			SRC/square.c \

CFLAGS	=	-I ./include

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
