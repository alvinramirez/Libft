/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:57 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/12 18:05:25 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t byte_number)
{
	size_t				index;
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	if (destination == NULL && source == NULL)
		return (NULL);
	index = 0;
	tmp_dst = (unsigned char *)destination;
	tmp_src = (const unsigned char *)source;
	while (index < byte_number)
	{
		tmp_dst[index] = tmp_src[index];
		index++;
	}
	return (destination);
}
