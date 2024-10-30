/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:46:44 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 15:44:47 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strchr(const char *string, int character)
{
	while (*string != '\0' && character != *string)
	{
		string++;
	}
	if (character == *string)
	{
		return ((char *)string);
	}
	return (NULL);
}

int main()
{
    const char *str = "Hello, world!";
    int character1 = 'o';
    int character2 = 'z';
    int character3 = '\0';

    // Caso 1: Buscar un carácter que sí está en la cadena
    char *result1 = ft_strchr(str, character1);
    if (result1 != NULL)
    {
        printf("Caso 1: El carácter '%c' se encontró en la posición: %ld\n", character1, result1 - str);
    }
    else
    {
        printf("Caso 1: El carácter '%c' no se encontró en la cadena.\n", character1);
    }

    // Caso 2: Buscar un carácter que no está en la cadena
    char *result2 = ft_strchr(str, character2);
    if (result2 != NULL)
    {
        printf("Caso 2: El carácter '%c' se encontró en la posición: %ld\n", character2, result2 - str);
    }
    else
    {
        printf("Caso 2: El carácter '%c' no se encontró en la cadena.\n", character2);
    }

    // Caso 3: Buscar el carácter nulo '\0'
    char *result3 = ft_strchr(str, character3);
    if (result3 != NULL)
    {
        printf("Caso 3: El carácter nulo '\\0' se encontró en la posición: %ld\n", result3 - str);
    }
    else
    {
        printf("Caso 3: El carácter nulo '\\0' no se encontró en la cadena.\n");
    }

    return 0;
}