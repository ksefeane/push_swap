# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 10:30:37 by ksefeane          #+#    #+#              #
#    Updated: 2019/07/23 10:53:44 by ksefeane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

SRC = ft_check.c

LIB = libft/libft.a

BUILD = gcc -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME): $(LIB)
	@$(BUILD) $(NAME) $(SRC) $(LIB)
	@echo "$(NAME) created"

$(LIB):
	@make re -C libft

clean:
	@rm -rf $(NAME)
	@echo "$(NAME) deleted"

fclean: clean

re: fclean all

.PHONY: clean fclean all re
