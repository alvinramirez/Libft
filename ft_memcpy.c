/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:57 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/26 20:52:23 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Esta funcion copia n bytes del area de memoria source al area de memoria destination,
 *
 * @param void destination la cadena de destino.
 * @param void source la cadena de origen.
 * @param byte_number el numero de bytes a copiar.
 *
 * @return un puntero a la cadena de destino, el valor original de destination.
 */

void	*ft_memcpy(void *destination, const void *source, size_t byte_number)
{
	size_t	count;

	count = 0;
	if (destination == 0 || source == 0)
		return (0);
	while (count < byte_number)
	{
		((char *)destination)[count] = ((const char *)source)[count];
		count++;
	}
	return (destination);
}

int main ()
{
	char	source[] = "Hola Mundo";
	char	destination[20];

	// Ejemplo de copiando bytes de una cadena a una cadena vacia
	// Usamos ft_memcpy para copiar el contenido de 'source' a 'destination'
	ft_memcpy(destination, source, ft_strlen(source) + 1); // Incluimos el '\0' final
	// Mostramos el resultado
	printf("Source: %s\n", source);
	printf("Destination después de ft_memcpy: %s\n", destination);

//-----------------------------------------------------------------------------------------------------------------
	
    // Ejemplo de solapamiento en una misma cadena
    char	source_memcpy[] = "ABCDEFGHIJ";
	
	// Mostrar el contenido inicial de la cadena
	printf("Contenido inicial:\n");
	printf("Source: %s\n", source_memcpy);
	// Caso con ft_memcpy: copiamos "ABCDE" en la posición 2 de la misma cadena (solapamiento)
	ft_memcpy(&source_memcpy[2], &source_memcpy[0], 5);
	printf("Después de ft_memcpy con solapamiento:\n");
	printf("Source: %s\n\n", source_memcpy);
	return (0);
}

// REFACTOR: No igualo las variables o parametros de dest y source a unsigned, revisar si esto podria afectar al entregar
