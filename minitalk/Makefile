NAMESERVER	=	server
NAMECLIENT	=	client

CFLAGS		=	gcc -Wall -Werror -Wextra

SRCCLIENT	=	client.c
SRCSERVER	=	server.c

SRC			=	ft_putchar.c ft_putnbr.c \
				ft_atoi.c ft_isdigit.c

INC			=	-I minitalk.h

client:
	@ $(CFLAGS) $(SRCCLIENT) $(SRC) $(INC) -o $(NAMECLIENT)

server:
	@ $(CFLAGS) $(SRCSERVER) $(SRC) $(INC) -o $(NAMESERVER)