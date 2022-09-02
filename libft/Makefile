# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 19:45:50 by jsaldana          #+#    #+#              #
#    Updated: 2022/09/02 10:47:56 by jsaldana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRC=		ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strncmp.c \

OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra


$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "\033[92mLibrary Compiled"

$(OBJS) : $(SRC)
	@gcc $(FLAGS) -c $(SRC)

all: $(NAME)

run: all
	@clear
	@gcc main.c libft.a
	@./a.out

clean:
	@rm -f $(OBJS)
	@echo "\033[93mAll .o Files Removed"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed"

re:	fclean all

.PHONY: all fclean clean re