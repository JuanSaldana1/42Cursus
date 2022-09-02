# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 19:45:50 by jsaldana          #+#    #+#              #
#   Updated: 2022/09/02 19:41:22 by jsaldana         ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRC=	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_toupper.c \

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