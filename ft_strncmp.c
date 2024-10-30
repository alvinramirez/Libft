/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:47:28 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 03:23:35 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t number)
{
	size_t				count;
	const unsigned char	*tmp_string1 = (const unsigned char *)string1;
	const unsigned char	*tmp_string2 = (const unsigned char *)string2;

	count = 0;
	while ((count < number) && (tmp_string1[count] || tmp_string2[count]))
	{
		if (tmp_string1[count] != tmp_string2[count])
		{
			return (tmp_string1[count] - tmp_string2[count]);
		}
		count++;
	}
	return (0);
}

int main(void)
{
    const char *str1 = "hello";
    const char *str2 = "he";
    size_t number = 5;

    int result = ft_strncmp(str1, str2, number);

    // Interpretación del resultado
    if (result == 0)
    {
        printf("Las cadenas son iguales hasta %zu caracteres.\n", number);
    }
    else if (result > 0)
    {
        printf("La cadena str1 es mayor que str2 en los primeros %zu caracteres.\n", number);
    }
    else
    {
        printf("La cadena str1 es menor que str2 en los primeros %zu caracteres.\n", number);
    }

    return 0;
}