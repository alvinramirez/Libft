/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:12:14 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 10:45:46 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *string_length)
{
	size_t	count;

	count = 0;
	while (string_length[count] != '\0')
		count++;
	return (count);
}
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

char	*ft_strjoin(char const *string1, char const *string2)
{
	size_t string1_length;
	size_t string2_length;
	char *join;

	if (!string1 || !string2)
		return (NULL);
	string1_length = ft_strlen(string1);
	string2_length = ft_strlen(string2);
	join = (char *)malloc((string1_length + string2_length + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, string1, string1_length + 1);
	ft_strlcpy((join + string1_length), string2, string2_length + 1);
	return (join);
}

int main()
{
    char *string1 = "Hola, ";
    char *string2 = "Mundo!";
    char *result = ft_strjoin(string1, string2);

    if (result) 
    {
        printf("Resultado de ft_strjoin: %s\n", result);
        free(result);
    } 
    else 
    {
        printf("Error al concatenar las cadenas.\n");
    }
    return 0;
}