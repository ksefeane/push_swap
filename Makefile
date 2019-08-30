# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 10:30:37 by ksefeane          #+#    #+#              #
#    Updated: 2019/08/30 11:45:11 by ksefeane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH = push_swap

CHECK = checker

P_SRC = src/push_swap/*

C_SRC = src/checker/* src/push_swap/ft*.c

P_INC = inc/push_swap.h

C_INC = inc/checker.h

LIB = libft/libft.a

BUILD = gcc -Wall -Werror -Wextra -o

all: $(CHECK) $(PUSH)

$(PUSH): $(LIB)
	@$(BUILD) $(PUSH) $(P_SRC) $(LIB)
	@echo "$(PUSH) created"

$(CHECK): $(LIB)
	@$(BUILD) $(CHECK) $(C_SRC) $(LIB)
	@echo "$(CHECK) created"

$(LIB):
	@make -C libft

clean:
	@rm -rf $(PUSH) $(CHECK)
	@echo "$(PUSH) deleted"
	@echo "$(CHECK) deleted"

fclean: clean
	@make fclean -C libft

re: clean all

RE: fclean all

.PHONY: clean fclean all re
