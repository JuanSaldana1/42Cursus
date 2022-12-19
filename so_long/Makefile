NAME = tutorial

SOURCES = tutorial.c

OBJECTS = $(subst .c,.o,$(SOURCES))

FLAGS = -Wall -Wextra #-Werror
LINKS = -I /usr/local/include -L /usr/local/lib \
    -l mlx -l ft -framework OpenGL -framework Appkit

# Remember to implement your rules...

$(NAME): $(OBJECTS)
    gcc $(SOURCES) -o $(NAME) $(FLAGS) $(LINKS)