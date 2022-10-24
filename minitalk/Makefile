NAMECLIENT		=	client
NAMESERVER		=	server

SRCCLIENT		=	client.c
SRCSERVER		=	server.c
OBJCLIENT		=	client.o
OBJSERVER		=	server.o
INC				=	minitalk.h

# printf Variables:
LIBFTPRINTF		=	printf/libftprintf.a
LIBFTPRINTF_DIR	=	printf

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra
AR				=	ar rc

%.o: %.c
	@ $(CC) $(FLAGS) -c $< -o $@

$(LIBFTPRINTF):
	@ $(MAKE) -C $(LIBFTPRINTF_DIR)

$(NAMECLIENT): $(OBJCLIENT) $(INC)
	@ $(CC) $(FLAGS) $(LIBFTPRINTF) -o $@ $(OBJCLIENT)
	@ echo "\033[92mClient ready.\033[0m"

$(NAMESERVER): $(OBJSERVER) $(INC)
	@ $(CC) $(FLAGS) $(LIBFTPRINTF) -o $@ $(OBJSERVER)
	@ echo "\033[92mServer ready.\033[0m"

all: $(LIBFTPRINTF) $(NAMECLIENT) $(NAMESERVER)

clean:
	@ rm -f $(OBJCLIENT) $(OBJSERVER)
	@ echo "\033[93mAll .o Files Removed\033[0m"

fclean: clean
	@ echo "\033[95mRemoving objects from printf...\e[0m"
	@ $(MAKE) clean -C $(LIBFTPRINTF_DIR)
	@ rm -f $(NAMECLIENT) $(NAMESERVER)
	@ echo "\033[95mClient Removed\033[0m"
	@ echo "\033[95mServer Removed\033[0m"

re:	fclean all

.PHONY: all fclean clean re