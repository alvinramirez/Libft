/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:44:45 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:41:29 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
