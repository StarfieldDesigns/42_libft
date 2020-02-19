NAME 		= libft.a
FLAGS 		= -Wall -Werror -Wextra -c
FILES 		= ./*.c

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(FILES)
		ar rcs $(NAME) *.o

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
