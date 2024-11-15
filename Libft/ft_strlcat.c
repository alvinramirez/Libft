/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:45:11 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:41:06 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source,
		size_t destination_size)
{
	size_t	destination_length;
	size_t	source_length;
	size_t	count;

	destination_length = ft_strlen(destination);
	source_length = ft_strlen(source);
	count = 0;
	if (destination_size == 0)
		return (source_length);
	if (destination_size <= destination_length)
		return (source_length + destination_size);
	while (source[count] != '\0' && destination_length < destination_size - 1)
	{
		destination[destination_length] = source[count];
		count++;
		destination_length++;
	}
	destination[destination_length] = '\0';
	return (destination_length + ft_strlen(source + count));
}
