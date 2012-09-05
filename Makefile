##
## Makefile for libmy in /home/miele_t//GitHub/libmy
## 
## Made by thomas miele
## Login   <miele_t@epitech.net>
## 
## Started on  Wed Sep  5 10:51:40 2012 thomas miele
## Last update Wed Sep  5 11:01:20 2012 thomas miele
##

NAME=	libmy.a

SRC=	my_str.c	\
	my_getnbr.c	\
	my_putnbr.c	\
	my_strcmp.c	\
	my_printf.c	\

OBJ=	$(SRC:.c=.o)

all:
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
