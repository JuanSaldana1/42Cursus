# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 11:42:32 by jsaldana          #+#    #+#              #
#    Updated: 2022/10/24 12:18:00 by jsaldana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMECLIENT		=	client
NAMESERVER		=	server

SRCCLIENT		=	client.c
SRCSERVER		=	server.c
INC				=	minitalk.h

# printf Variables:
LIBFTPRINTF		=	printf/libftprintf.a
LIBFTPRINTF_DIR	=	printf

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra
AR				=	ar rc

OBJS	=	$(SRC:%.c=%.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "\033[92mLibrary Compiled"

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "\033[93mAll .o Files Removed"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed"

re:	fclean all

.PHONY: all fclean clean re