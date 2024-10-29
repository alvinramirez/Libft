/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:14:26 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 09:24:10 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Esta funcion aplicacion la "funcion" a cada caracter "string", pasa el indice
 * del caracter en el string, y del caracter a la "funcion", el resultado de la
 * "funcion" es colocado en el nuevo string indice,
	al final retorna el nuevo string
 * resultante de la aplicacion de "funcion" en cada caracter del string.
 * Tener en cuenta que esta funcion es muy similar a "ft_striteri",
 * la diferencia radica en que aquella no devuelve nada y esta si encima con
 * los caracteres modificados, esto es util para conserva una cadena original,
 * y trabajar con una version transformada de ella.
 */

size_t	ft_strlen(const char *string_length)
{
	size_t	count;

	count = 0;
	while (string_length[count] != '\0')
		count++;
	return (count);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strmapi(char const *string, char (*function)(unsigned int, char))
{
	char			*new_string;
	unsigned int	index;

	if (!string || !function)
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (!new_string)
		return (NULL);
	index = 0;
	while (string[index])
	{
		new_string[index] = function(index, string[index]);
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}

char to_uppercase(unsigned int index, char c) 
{
	(void)index;  // Ignorar el índice
	return (char)toupper((int)c);
}

int main() {
    char *original = "Texto Original";

    // Crear una versión en mayúsculas
    char *uppercase_version = ft_strmapi(original, to_uppercase);

    if (uppercase_version)
    {
        printf("Original: %s\n", original);
        printf("Mayúsculas: %s\n", uppercase_version);

        // Liberar la memoria asignada
        free(uppercase_version);
    }
    else
    {
        printf("Error al crear las versiones transformadas.\n");
    }

    return 0;
}