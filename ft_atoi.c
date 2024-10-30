/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:39:45 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 09:36:28 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

static int	remove_spaces(const char *string)
{
	int	count;

	count = 0;
	while (string[count] == ' ' || string[count] == '\t'
		|| string[count] == '\n' || string[count] == '\r'
		|| string[count] == '\v' || string[count] == '\f')
		count++;
	return (count);
}

static unsigned long	final_number(const char *string, int start_index,
		int end_index)
{
	unsigned long	result;
	unsigned long	place_value;

	place_value = 1;
	result = 0;
	end_index--;
	while (start_index <= end_index)
	{
		result = result + ((string[end_index] - '0') * place_value);
		place_value = place_value * 10;
		end_index--;
	}
	return (result);
}

int	ft_atoi(const char *string)
{
	int				position;
	int				sign_factor;
	unsigned long	final_numeric_value;

	position = remove_spaces(string);
	sign_factor = 1;
	if (string[position] == '+' || string[position] == '-')
		if (string[position++] == '-')
			sign_factor = -1;
	if (!ft_isdigit(string[position]))  // Verificación inicial si no es dígito
		return (0);

	// Convertir los caracteres numéricos
	int start_index = position;
	while (ft_isdigit(string[position]))  // Avanza hasta el primer no dígito
		position++;

	final_numeric_value = final_number(string, start_index, position);
	// Manejo de desbordamiento
	if (final_numeric_value > __LONG_MAX__ && sign_factor == 1)
		return (-1);
	else if (final_numeric_value > __LONG_MAX__ && sign_factor == -1)
		return (0);

	return ((int)(sign_factor * final_numeric_value));
}

int	main(void)
{
	// Casos de prueba con caracteres ASCII y palabras
    const char *test1 = "abc123";           // Debería devolver 0 porque no comienza con un número
    const char *test2 = "   +456xyz";       // Debería devolver 456, ignorando "xyz"
    const char *test3 = "-789.12";          // Debería devolver -789, ignorando ".12"
    const char *test4 = " \t\n5678text";    // Debería devolver 5678, ignorando "text"
    const char *test5 = "42!";              // Debería devolver 42, ignorando "!"
    const char *test6 = "+#-999";           // Debería devolver 0 porque hay caracteres inválidos después del signo
    const char *test7 = "";                 // Debería devolver 0 para una cadena vacía
    const char *test8 = " \v- \f123";       // Debería devolver 0 porque el signo y número no están juntos
    const char *test9 = "2147483648";       // Debería devolver -1 si excede LONG_MAX

    // Imprimir los resultados de ft_atoi para cada caso
    printf("ft_atoi(\"%s\") = %d\n", test1, ft_atoi(test1));   // Imprime 0
    printf("ft_atoi(\"%s\") = %d\n", test2, ft_atoi(test2));   // Imprime 456
    printf("ft_atoi(\"%s\") = %d\n", test3, ft_atoi(test3));   // Imprime -789
    printf("ft_atoi(\"%s\") = %d\n", test4, ft_atoi(test4));   // Imprime 5678
    printf("ft_atoi(\"%s\") = %d\n", test5, ft_atoi(test5));   // Imprime 42
    printf("ft_atoi(\"%s\") = %d\n", test6, ft_atoi(test6));   // Imprime 0
    printf("ft_atoi(\"%s\") = %d\n", test7, ft_atoi(test7));   // Imprime 0
    printf("ft_atoi(\"%s\") = %d\n", test8, ft_atoi(test8));   // Imprime 0
    printf("ft_atoi(\"%s\") = %d\n", test9, ft_atoi(test9));   // Imprime -1 si hay desbordamiento

    return 0;
}
