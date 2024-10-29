/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:44:45 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/27 01:09:16 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source,
		size_t destination_size)
{
	size_t	count;
	size_t	length_source;

	length_source = ft_strlen(source);
	if (destination_size < 1)
	{
		return (length_source);
	}
	count = 0;
	while (source[count] != '\0' && count < (destination_size - 1))
	{
		destination[count] = source[count];
		count++;
	}
	destination[count] = '\0';
	return (length_source);
}
int main() {
    // Ejemplo 1: Copiar una cadena corta en un búfer suficientemente grande
    char destination1[20];
    const char *source1 = "Hola Mundo";
    size_t len1 = ft_strlcpy(destination1, source1, sizeof(destination1));

    printf("Ejemplo 1:\n");
    printf("Source: %s\n", source1);
    printf("Destination: %s\n", destination1);
    printf("Longitud de source: %zu\n\n", len1);

    // Ejemplo 2: Copiar una cadena larga en un búfer pequeño
    char destination2[5];
    const char *source2 = "Hola Mundo";
    size_t len2 = ft_strlcpy(destination2, source2, sizeof(destination2));

    printf("Ejemplo 2:\n");
    printf("Source: %s\n", source2);
    printf("Destination: %s\n", destination2);  // Esperamos "Hola" truncado con '\0'
    printf("Longitud de source: %zu\n\n", len2);

    // Ejemplo 3: Copiar una cadena vacía
    char destination3[10];
    const char *source3 = "";
    size_t len3 = ft_strlcpy(destination3, source3, sizeof(destination3));

    printf("Ejemplo 3:\n");
    printf("Source: \"%s\"\n", source3);
    printf("Destination: \"%s\"\n", destination3);  // Debería ser una cadena vacía
    printf("Longitud de source: %zu\n\n", len3);

    // Ejemplo 4: `destination_size` es 0
    char destination4[10];
    const char *source4 = "OpenAI";
    size_t len4 = ft_strlcpy(destination4, source4, 0);

    printf("Ejemplo 4:\n");
    printf("Source: %s\n", source4);
    printf("Destination: %s (sin cambios ya que destination_size es 0)\n", destination4);
    printf("Longitud de source: %zu\n\n", len4);

    return 0;
}