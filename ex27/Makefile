NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

SOURCES = \
	./functions/ft_putchar.c \
	./functions/ft_putstr.c \
	./functions/ft_display_file.c \
	./src/main.c \

OBJECTS = \
	./ft_putchar.o \
	./ft_putstr.o \
	./ft_display_file.o \
	./main.o \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all