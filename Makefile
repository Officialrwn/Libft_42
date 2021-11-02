NAME = libft.a
SRCS = ./*.c
HEADER = ./libft.h
FLAGS = -Wall -Wextra -Werror
O_FILES = ./*.o
RANLIB = ranlib libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(HEADER) $(SRCS)
	ar rc $(NAME) $(O_FILES)
	$(RANLIB)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all