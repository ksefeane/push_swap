# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 10:30:37 by ksefeane          #+#    #+#              #
#    Updated: 2019/07/24 12:40:53 by ksefeane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECK = checker

C_SRC = src/checker/*

C_INC = inc/checker.h

LIB = libft/libft.a

BUILD = gcc -Wall -Werror -Wextra -o

all: $(CHECK)

$(CHECK): $(LIB)
	@$(BUILD) $(CHECK) $(C_SRC) $(LIB)
	@echo "$(CHECK) created"

$(LIB):
	@make re -C libft

clean:
	@rm -rf $(CHECK)
	@echo "$(CHECK) deleted"

fclean: clean

re: fclean all

.PHONY: clean fclean all re
