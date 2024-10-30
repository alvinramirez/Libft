/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:01 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 16:41:31 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string_length)
{
	size_t	count;

	count = 0;
	while (string_length[count] != '\0')
		count++;
	return (count);
}
int main ()
{
	// Ejemplos de cadenas a probar
    const char *str1 = "Hola, mundo";
    const char *str2 = "";
    const char *str3 = "42";
    const char *str4 = "Esto es una prueba con una cadena larga.";

    // Llamadas a ft_strlen
    printf("Longitud de \"%s\"es: %zu\n", str1, ft_strlen(str1));
    printf("Longitud de \"%s\"es: %zu\n", str2, ft_strlen(str2)); // Cadena vacía
    printf("Longitud de \"%s\"es: %zu\n", str3, ft_strlen(str3));
    printf("Longitud de \"%s\"es: %zu\n", str4, ft_strlen(str4));

    return 0;
}