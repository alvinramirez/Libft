/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:57 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:33:46 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t byte_number)
{
	size_t	count;

	count = 0;
	if (destination == 0 || source == 0)
		return (0);
	while (count < byte_number)
	{
		((char *)destination)[count] = ((const char *)source)[count];
		count++;
	}
	return (destination);
}
