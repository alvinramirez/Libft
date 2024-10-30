/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:48:37 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 15:58:45 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	haystack_index;
	size_t	needle_index;

	haystack_index = 0;
	if (needle[haystack_index] == '\0')
		return ((char *)haystack);
	while (haystack[haystack_index] && haystack_index < length)
	{
		needle_index = 0;
		while (haystack[haystack_index + needle_index] == needle[needle_index]
			&& (haystack_index + needle_index) < length)
		{
			needle_index++;
			if (needle[needle_index] == '\0')
				return ((char *)haystack + haystack_index);
		}
		haystack_index++;
	}
	return (NULL);
}
int main(void) 
{
    const char *haystack = "Hola, gatito!";
    const char *needle = "gatito";
    size_t length = 12;

    char *result = ft_strnstr(haystack, needle, length);

    if (result != NULL) 
    {
        printf("Subcadena encontrada: %s\n", result);
    } 
    else 
    {
        printf("Subcadena no encontrada.\n");
    }

    return 0;
}