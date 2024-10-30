
NAME = libft.a

SRC =	ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl.c\
				ft_putnbr_fd.c\

# Definiendo INCLUDE para incluir archivos de encabezado
INCLUDE = -I .

# Definiendo los archivos objeto
OBJ := $(SRC:.c=.o)

# Opciones de compilación
CFLAGS := -Wall -Wextra -Werror

# Compilar y crear la biblioteca
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
# Regla para compilar todos los archivos
all: $(NAME)

# Limpiar los archivos objeto
clean:
	rm -f $(OBJ)
# Limpiar los archivos objeto y la biblioteca
fclean: clean
	rm -f $(NAME)

# Reconstruir todo desde cero
re: fclean all

# Compilación individual de archivos .c a .o
%.o: %.c
	cc $(CFLAGS) -c $< -o $@

# Declaración de las reglas como "phony" para evitar conflictos con archivos que se llamen igual
.PHONY: all clean fclean re