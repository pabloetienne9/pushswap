##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compilation
##

SRC	=	src/push_swap.c	\
		src/swap.c	\
		src/switch.c	\
		src/rotate.c	\
		src/in_rotate.c	\
		src/deplace_right.c	\
		src/deplace_left.c	\
		src/my_put_nbr.c	\
		src/my_putchar.c	\
		src/my_getnbr.c	\
		src/my_putstr.c	\
		src/main.c

CFLAGS	+=	-I./include

LDFLAGS =       -Wall -Wextra -Wshadow -I./include

NAME	=	push_swap

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all