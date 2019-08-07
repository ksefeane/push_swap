# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 10:30:37 by ksefeane          #+#    #+#              #
#    Updated: 2019/08/07 14:18:50 by ksefeane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECK = checker

PUSH = push_swap

C_SRC = src/checker/*

P_SRC = src/push_swap/* src/checker/ft_*

C_INC = inc/checker.h inc/push_swap.h

LIB = libft/libft.a

BUILD = gcc -Wall -Werror -Wextra -o

all: $(CHECK) $(PUSH)

$(CHECK): $(LIB)
	@$(BUILD) $(CHECK) $(C_SRC) $(LIB)
	@echo "$(CHECK) created"

$(PUSH): $(LIB)
	@$(BUILD) $(PUSH) $(P_SRC) $(LIB)
	@echo "$(PUSH) created"

$(LIB):
	@make -C libft

clean:
	@rm -rf $(CHECK) $(PUSH)
	@echo "$(CHECK) deleted"
	@echo "$(PUSH) deleted"

fclean: clean
	@make fclean -C libft

re: clean all

RE: fclean all

.PHONY: clean fclean all re
