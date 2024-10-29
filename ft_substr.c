/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:19:44 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 17:43:15 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Asignar memoria para una cadena vacia y colocar el caracter nulo
static char	*ft_allocate_empty_string(void)
{
	char	*empty_string;

	empty_string = (char *)malloc(1);
	if (empty_string)
		empty_string[0] = '\0';
	return (empty_string);
}

char	*ft_substr(char const *string, unsigned int start, size_t length)
{
	char	*new_string;
	size_t	original_length;
	size_t	src_index;
	size_t	dest_index;

	original_length = ft_strlen(string);
	if (!string)
		return (NULL);
	if (start >= original_length)
	{
		return (ft_allocate_empty_string());
	}
	if (length > original_length - start)
		length = original_length - start;
	new_string = (char *)malloc(length + 1);
	if (!new_string)
		return (NULL);
	src_index = start;
	dest_index = 0;
	while (dest_index < length)
		new_string[dest_index++] = string[src_index++];
	new_string[dest_index] = '\0';
	return (new_string);
}

int main() 
{
    const char *original = "Hello, world!";
    char *subcadena = ft_substr(original, 7, 5);

    printf("Cadena original: %s\n", original);   // Imprime "Hello, world!"
    printf("Subcadena: %s\n", subcadena);         // Imprime "world"

    free(subcadena);  // Liberamos la memoria de la subcadena
    return (0);
}