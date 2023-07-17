NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

SOURCES = \
	./functions/ft_putchar.c \
	./functions/ft_putstr.c \
	./functions/ft_display_file.c \
	./src/main.c \

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re