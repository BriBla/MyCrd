##
## ETNA PROJECT, 29/03/2021 by blanch_b
## MakeFile Project C
## File description:
##      My Crd
##

CC = gcc
NAME = my_crd
SRC_FILES = main.c \
			insert_node.c \
			delete_node.c \
			my_readline.c \
			my_putstr.c \
			str_to_words.c \
			sub_main.c

SRC_DIR = lib/
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ = $(SRC:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror -std=c11

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)
		
clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all