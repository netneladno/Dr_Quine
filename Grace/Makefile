NAME = Grace

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC :=	Grace.c

OBJ := ${SRC:.c=.o}

#HEADERS = 

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re
