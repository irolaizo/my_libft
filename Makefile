
# Nombre de la librería
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
       ft_strncmp.c
OBJS = $(SRCS:.c=.o)

# Regla por defecto: compilar la librería
all: $(NAME)

# Crear la librería estática
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Regla para limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Regla para limpiar todo, incluyendo la librería
fclean: clean
	rm -f $(NAME)

# Regla para recompilar desde cero
re: fclean all

.PHONY: all, clean, fclean, re