# **************************************************************************** #
#                                   LIBFT                                      #
# **************************************************************************** #

# Name of your library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files (add more as you go)
SRC = ft_strlen.c ft_isalnum.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.cc
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c
ft_strncmp.c ft_strnstr.c ft_tolower.c ft_toupper.c

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
