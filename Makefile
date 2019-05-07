
SOURCES = ft_memset.c
NAME = libft.a

all : $(NAME)
	ar src $(NAME) *.o

$(NAME) :
	gcc -c $(SOURCES)

clean :  
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
