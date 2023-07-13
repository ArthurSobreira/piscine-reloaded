NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

SOURCES = \
	./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c \

OBJECTS = \
	ft_putchar.o \
	ft_putstr.o \
	ft_strcmp.o \
	ft_strlen.o \
	ft_swap.o \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(HEADER)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all