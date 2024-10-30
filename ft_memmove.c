/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:44:23 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:34:24 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t byte_number)
{
	unsigned char		*temp_d;
	const unsigned char	*temp_s;

	temp_d = (unsigned char *)destination;
	temp_s = (const unsigned char *)source;
	if (source == 0 || destination == 0)
		return (0);
	if (destination > source)
	{
		while (byte_number > 0)
		{
			byte_number--;
			temp_d[byte_number] = temp_s[byte_number];
		}
	}
	else
	{
		ft_memcpy(temp_d, temp_s, byte_number);
	}
	return (destination);
}
