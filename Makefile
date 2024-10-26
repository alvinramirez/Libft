# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 16:04:28 by alvinram          #+#    #+#              #
#    Updated: 2024/09/27 17:33:52 by alvinram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

// Definiendo el compilador a utilizar
CC = gcc

// Definiendo los flags de compilacion
CCFLAGS = -Wall -Werror -Extra

// Definiendo los archivos fuente
MY_SOURCES =	ft_isalpha\
				ft_isdigit\

// Definiendo las funciones bonus
BONUS_SOURCES =	ft_substr\
				ft_strjoin\

// Definiendo una variable para convertir los .c en .o
OBJS = $(MY_SOURCES:.c=.o)

// Definiendo la creacion del ejecutable
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(NAME) created"

// Definiendo regla de patron para indicar como compilar archivos .c en .o
%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

// Definiendo regla para creacion de la biblioteca libft.a
all: $(NAME)

// Definiendo regla para limpiar el proyecto, borrar archivos y evitar errores si existen
clean:
	@rm -f $(OBJS)
	@echo "OBJS deleted"

// Definiendo regla para limpiar por completo el proyecto, extiende la regla anterior clean
fclean: clean
	@rm -f $(NAME)
	@echo "OBJS and $(NAME) deleted"

// Definiendo regla para asegurar de que el proyecto se recompila completamente
re: fclean all

// Definiendo regla para que "make" siempre ejecute estas reglas, incluso si existe un archivo con el mismo nombre que la regla.
.PHONY: all, bonus, clean, fclean, re 
