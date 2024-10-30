/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:22 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:35:00 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int memory_value, size_t bytes_length)
{
	unsigned char	*byte_pointer;
	size_t			count;

	count = 0;
	byte_pointer = pointer;
	while (count < bytes_length)
	{
		byte_pointer[count] = (unsigned char)memory_value;
		count++;
	}
	return (pointer);
}
