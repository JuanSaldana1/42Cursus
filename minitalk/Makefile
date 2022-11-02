# Library Name #
NAME			=
CLIENT			=	client
SERVER			=	server

SRCCLIENT		=	client.c
SRCSERVER		=	server.c
OBJCLIENT		=	client.o
OBJSERVER		=	server.o
INC				=	printf/ft_printf.h

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra
AR				=	ar rc

$(NAME): all

%.o: %.c
	@ $(CC) $(FLAGS) -c $< -o $@

printf:
	echo hola
	make -C printf/

all: printf

clean:
	@ rm -f $(OBJCLIENT) $(OBJSERVER)
	@ echo "\033[93mAll .o Files Removed\033[0m"∫

fclean: clean
	@ echo "\033[95mRemoving objects from printf...\e[0m"
	@ make clean -C $(LIBFTPRINTF_DIR)
	@ rm -f $(NAMECLIENT) $(NAMESERVER)
	@ echo "\033[95mClient Removed\033[0m"
	@ echo "\033[95mServer Removed\033[0m"

re:	fclean all

.PHONY: all fclean clean re