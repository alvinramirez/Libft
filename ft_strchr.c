/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:46:44 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/12 17:01:45 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int character)
{
	unsigned char	search_char;

	search_char = (unsigned char)character;
	while (*string)
	{
		if (*string == search_char)
		{
			return ((char *)string);
		}
		string++;
	}
	if (search_char == '\0')
	{
		return ((char *)string);
	}
	return (NULL);
}
