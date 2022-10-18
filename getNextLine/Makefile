# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/10/18 19:26:21 by jsaldana          #+#    #+#             #
#   Updated: 2022/10/18 19:26:21 by jsaldana         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME	=	get_next_line
SRC		=	get_next_line.c get_next_line_utils.c
CC		=	gcc
AR		=	ar rc
OBJS	=	$(SRC:%.c=%.o)
FLAGS	=	-Wall -Werror -Wextra -D BUFFER_SIZE=42

%.o		:	%.c
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
	@$(AR) $@ $^
	@echo "\033[92mLibrary Compiled"

all		:	$(NAME)

clean	:
	@rm -f $(OBJS)
	@echo "\033[93mAll .o Files Removed"

fclean	: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed"

re		:	fclean all

.PHONY	: all fclean clean re