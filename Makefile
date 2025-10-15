# **************************************************************************** #
#                                   LIBFT                                      #
# **************************************************************************** #

# Name of your library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files (add more as you go)
SRC = ft_putchar.c ft_strlen.c

# Object files (auto-generated from SRC)
OBJ = $(SRC:.c=.o)

# Header file
HEADER = libft.h

# --- Rules --------------------------------------------------------------

# Default rule: make library
all: $(NAME)

# Create the static library from object files
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile .c → .o
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Remove .o files
clean:
	rm -f $(OBJ)

# Remove .o + .a files
fclean: clean
	rm -f $(NAME)

# Clean and recompile everything
re: fclean all

# Tells make these are not files
.PHONY: all clean fclean re
