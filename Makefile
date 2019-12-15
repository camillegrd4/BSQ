##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=		SRC/bsq.c \
			lib/my_putchar.c \
			lib/my_getnbr.c \
			lib/my_put_nbr.c \
			lib/my_putstr.c \
			lib/my_strlen.c \
			SRC/min_nbr.c \
			SRC/main.c \
			SRC/intlen.c \
			SRC/calc_square.c \
			SRC/square.c \
			SRC/comparison_function.c \

CFLAGS	=	-I ./include

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@rm -rf $(OBJ)

debug:	$(OBJ)
	gcc -o debug $(OBJ) $(CFLAGS) -g

re:	fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
