/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:48:37 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:43:06 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
