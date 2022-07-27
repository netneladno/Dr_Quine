NAME = Colleen

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC :=	Colleen.c

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




#	clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen.txt ; 
#	diff tmp_Colleen.txt Colleen.c
	#clang -Wall -Wextra -Werror -o Grace Grace.c
	#./Grace
	#diff Grace.c Grace_kid.c
#	clang -g -Wall -Wextra -Werror Sully.c -o Sully ; ./Sully

