/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:45:11 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 22:22:13 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcat(char *destination, const char *source,
		size_t destination_size)
{
	size_t	destination_length;
	size_t	source_length;
	size_t	count;

	destination_length = ft_strlen(destination);
	source_length = ft_strlen(source);
	count = 0;
	// Si no hay espacio en destination, retornar longitud de source
	if (destination_size == 0)
		return source_length;

	// Si destination no tiene espacio para concatenar, retornar longitud total necesaria
	if (destination_size <= destination_length)
		return source_length + destination_size;

	// Concatenar caracteres de source a destination dentro del límite
	while (source[count] != '\0' && destination_length < destination_size - 1)
	{
		destination[destination_length] = source[count];
		count++;
		destination_length++;
	}
	// Asegurar el carácter nulo al final de destination
	destination[destination_length] = '\0';

	// Retornar la longitud total que destination habría necesitado
	return destination_length + ft_strlen(source + count);
}

int main()
{
	char destination[20] = "Hello, ";
	const char *source = "world!";
	size_t destination_size = sizeof(destination);

	size_t result = ft_strlcat(destination, source, destination_size);

	printf("Resultado: %s\n", destination);
	printf("Longitud total que se necesitaría: %zu\n", result);

	// Comparación con strlcat para verificar
	char destination2[20] = "Hello, ";
	size_t result_original = ft_strlcat(destination2, source, destination_size);
	printf("Resultado con strlcat original: %s\n", destination2);
	printf("Longitud total esperada: %zu\n", result_original);

	return 0;
}