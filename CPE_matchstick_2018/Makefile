##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC	=	gcc

RM	=	rm -rf

SRC	=	printgameboard.c	\
		ia.c				\
		manage_error.c		\
		nb_matches.c		\
		tools/my_putstr.c	\
		tools/my_getnbr.c	\
		game.c				\
		clean.c				\
		game2.c				\
		printgameboard2.c	\
		checkwin.c			\
		game3.c				\
		main.c

CFLAGS	=	-I./include

CC	=	gcc -g3

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

mr_clean :
	find -type f -name "*~" -delete -o -type f -name "#*#" -delete

.PHONY : all clean fclean mr_clean re