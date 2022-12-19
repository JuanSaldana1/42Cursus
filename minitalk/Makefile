NAMESERVER	=	server
NAMECLIENT	=	client

CFLAGS		=	gcc -Wall -Werror -Wextra

SRCCLIENT	=	client.c
SRCSERVER	=	server.c

SRC			=	ft_putchar.c ft_putnbr.c \
				ft_atoi.c ft_isdigit.c

INC			=	-I minitalk.h
RM			:=	rm -rf

client:
	@ $(CFLAGS) $(SRCCLIENT) $(SRC) $(INC) -o $(NAMECLIENT)

server:
	@ $(CFLAGS) $(SRCSERVER) $(SRC) $(INC) -o $(NAMESERVER)

all: server client

clean:
	@ $(RM) server client

fclean: clean

re: fclean all

.PHONY: all clean fclean re