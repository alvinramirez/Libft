/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:44:23 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/26 20:53:05 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Esta funcion mueve n bytes de byte_number del area de memoria source al area de memoria destination,
 * cuando destination sea mayor que source en caso contrario pues se utiliza la funcion memcpy,
 * osea copiar ambos parametros en orden "normal".
 * 
 * @param void destination es donde se va a copiar el contenido.
 * @param void source es la cadena de origen.
 * @param size_t byte_number es el numero de bytes a mover.
 * 
 * @return un puntero a la cadena de destino.
 */

void	*ft_memmove(void *destination, const void *source, size_t byte_number)
{
	unsigned char		*temp_d;
	const unsigned char	*temp_s;

	temp_d = (unsigned char *)destination;
	temp_s = (const unsigned char *)source;
	if (source == 0 || destination == 0)
		return (0);
	if (destination > source)
	{
		// condicion para copiar en orden inverso para evitar el solapamiento
		while (byte_number > 0)
		{
			// decrementamos primero para usar byte_number - 1
			byte_number--;
			temp_d[byte_number] = temp_s[byte_number];
		}
	}
	else
	{
		ft_memcpy(temp_d, temp_s, byte_number);
	}
	return (destination);
}

int main ()
{
	char	source[] = "Hola Mundo";
	char	destination[20];

	// Ejemplo de copiando bytes de una cadena a una cadena vacia
	// Usamos ft_memmove para copiar el contenido de 'source' a 'destination'
	ft_memmove(destination, source, ft_strlen(source) + 1); // Incluimos el '\0' final
	// Mostramos el resultado
	printf("Source: %s\n", source);
	printf("Destination después de ft_memmove: %s\n", destination);

//-----------------------------------------------------------------------------------------------------------------
	
    // Ejemplo de solapamiento en una misma cadena
    char	source_memmove[] = "ABCDEFGHIJ";
	
	// Mostrar el contenido inicial de la cadena
	printf("Contenido inicial:\n");
	printf("Source: %s\n", source_memmove);
	// Caso con ft_memmove: copiamos "ABCDE" en la posición 2 de la misma cadena (solapamiento)
	ft_memmove(&source_memmove[2], &source_memmove[0], 5);
	printf("Después de ft_memmove con solapamiento:\n");
	printf("Source: %s\n\n", source_memmove);
	return (0);
}