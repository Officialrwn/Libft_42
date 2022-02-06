# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leo <leo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 19:40:15 by leo               #+#    #+#              #
#    Updated: 2022/02/06 07:13:31 by leo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent
NAME = FILE_NAME
SRC = source_files.c
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = libft/libft.a

FLAGS = -Wall -Wextra -Werror -I. -I includes

all: $(NAME)
$(NAME): $(LIBFT) $(OBJ)
	@echo "make all completed."
	gcc $(FLAGS) -c $(SRC)
	gcc -o $(NAME) $(OBJ) $(LIBFT)
$(LIBFT):
	make --silent -C $(LIBFT_DIR)
clean:
	@echo "make clean completed."
	/bin/rm -f $(OBJ)
	make --silent -C $(LIBFT_DIR) clean

fclean: clean
	@echo "make fclean completed."
	/bin/rm -f $(NAME)
	make --silent -C $(LIBFT_DIR) fclean

re: fclean all