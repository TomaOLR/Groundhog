##
## EPITECH PROJECT, 2021
## Math
## File description:
## 201
##

CFLAGS	  =	-Wall -Wextra -Werror -I./include -lm

CRIT 	  =	-lcriterion --coverage

SRC_MAIN  =	srcs/main.c			\


SRC 	  =	srcs/error_handling.c		\
		srcs/stockValue.c		\
		srcs/getData.c			\

SRC_TEST  =	tests/test_error_handling.c	\
		tests/test_stockValue.c		\
		tests/test_getData.c		\

CC	  =	gcc -o

OBJ	  =	$(SRC:.c=.o)

OBJ_MAIN  =	$(SRC_MAIN:.c=.o)

OBJ_TEST  =	$(SRC_TEST:.c=.o)

NAME	  =	groundhog

NAME_TEST =	unit_test

all:	$(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	$(CC) $(NAME) $(OBJ_MAIN) $(OBJ) $(CFLAGS)

tests_run: $(OBJ) $(OBJ_TEST)
	$(CC) $(NAME_TEST) $(SRC) $(SRC_TEST) $(CRIT) $(CFLAGS)
	./$(NAME_TEST)

clean:
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf $(OBJ)
	rm -rf $(OBJ_MAIN)
	rm -rf $(OBJ_TEST)

fclean:	clean
	rm -rf $(NAME)
	rm -rf $(NAME_TEST)

re: fclean all

.PHONY:	all clean fclean re
