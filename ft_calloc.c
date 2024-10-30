/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:23:51 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:31:37 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*allocated_memory;
	size_t	byte_index;

	if (number != 0 && size > SIZE_MAX / number)
	{
		return (NULL);
	}
	allocated_memory = malloc(number * size);
	if (!allocated_memory)
		return (NULL);
	byte_index = -1;
	while (++byte_index < size * number)
		allocated_memory[byte_index] = 0;
	return (allocated_memory);
}
