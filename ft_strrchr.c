/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:22:16 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 13:01:05 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *string, int character)
{
	char	*last_found_position;
	char	*current_position;

	last_found_position = 0;
	current_position = (char *)string;
	current_position = ft_strchr(current_position, character);
	while (current_position != 0)
	{
		last_found_position = current_position;
		current_position++;
		current_position = ft_strchr(current_position, character);
	}
	return (last_found_position);
}

int main()
{
    const char *str = "Hola, mundo! Bienvenido a la programación en C.";
    int character = 'o';

    char *result = ft_strrchr(str, character);

    if (result != NULL)
    {
        printf("Última aparición de '%c' encontrada en la posición: %ld\n", character, result - str);
    }
    else
    {
        printf("El carácter '%c' no se encontró en la cadena.\n", character);
    }

    return 0;
}