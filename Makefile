
NAME        = libft.a

SRC         = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
              ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
              ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
              ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
              ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
              ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
              ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# 🧩 Bonus part files (linked list functions)
BONUS_SRC   = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
              ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Object file lists
OBJ         = $(SRC:.c=.o)
BONUS_OBJ   = $(BONUS_SRC:.c=.o)

# Compiler and flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

# Commands
AR          = ar rcs
RM          = rm -f

# Default rule
all: $(NAME)

# Build the library (mandatory part)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Build the bonus version (mandatory + bonus)
bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

# Remove object files
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

# Remove objects and the library file
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Mark special targets as pho
