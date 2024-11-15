/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:22:16 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/11 09:52:28 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	int	index;

	index = ft_strlen(string);
	while (index >= 0)
	{
		if (string[index] == (char)character)
			return ((char *)&string[index]);
		index--;
	}
	return (NULL);
}
