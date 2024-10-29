/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:45:11 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/27 01:31:34 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
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
	{
		return (source_length);
	}
	if (destination_size <= destination_length)
	{
		return (source_length += destination_size);
	}
	else
	{
		source_length += destination_length;
	}
	while (source[count] != '\0' && destination_length < destination_size - 1
		&& destination != source)
	{
		destination[destination_length] = source[count];
		count++;
		destination_length++;
	}
	destination[destination_length] = '\0';
	return (source_length);
}
*/

size_t	ft_strlcat(char *destination, const char *source,
		size_t destination_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(destination);
	src_len = ft_strlen(source);
	// Si `dstsize` es menor o igual a la longitud de `dst`, devuelve `dstsize + src_len`
	if (destination_size <= dst_len)
		return (destination_size + src_len);
	// Inicio de concatenación
	i = dst_len;
	j = 0;
	while (source[j] != '\0' && i + 1 < destination_size)
	{
		destination[i] = source[j];
		i++;
		j++;
	}
	destination[i] = '\0';
	// Retorna longitud deseada
	return (dst_len + src_len);
}
