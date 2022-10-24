NAME	=	libftprintf.a

SRC		=	ft_printf.c ft_putchar.c \
			ft_putnbr.c ft_putnbr_hex.c \
			ft_putnbr_u.c ft_putstr.c \
			ft_strlen.c

CC		=	gcc

FLAGS	=	-Wall -Werror -Wextra

AR		=	ar rc

OBJS	=	$(SRC:%.c=%.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "\033[92mPrintf Compiled\033[0m"

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "\033[93mAll .o Files Removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed\033[0m"

re:	fclean all

.PHONY: all fclean clean re