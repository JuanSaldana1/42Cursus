NAME	=	libftprintf.a

SRC		=	ft_printf.c \
			ft_putnbr.c ft_putnbr_hex.c \
			ft_putnbr_u.c ft_putchar.c \
			ft_putstr.c ft_strlen.c \

CC		=	gcc

FLAGS	=	-Wall -Werror -Wextra

AR		=	ar rc

OBJS	=	$(SRC:%.c=%.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "\033[92mLibrary Compiled"

all: $(NAME)

run: all
	@clear
	@gcc $(SRC) $(NAME)
	@./a.out

clean:
	@rm -f $(OBJS)
	@echo "\033[93mAll .o Files Removed"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed"

re:	fclean all

.PHONY: all fclean clean re