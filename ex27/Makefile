NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

SOURCES = \
	./functions/ft_putchar.c \
	./functions/ft_putstr.c \
	./functions/ft_display_file.c \
	./src/main.c \

OBJECTS = $(SOURCES:%.c=%.o)  # Creates objects from sources, changing their extension.

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c  # Indicates that the rule will be applied to any object file (%.o) whose dependency (%.c) is a source file with the same base name.  
# Turns each (.c) file into a (.o) file needed to create the final executable.
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Defines a list of phony targets, which ensures that 'make' will always run the commands associated with those targets, regardless of whether files with those names exist on the system.
.PHONY: all clean fclean re