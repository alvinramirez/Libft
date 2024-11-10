/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:22:16 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/10 21:45:38 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	char	*last_found_position;

	last_found_position = (NULL);
	while (*string)
	{
		if (*string == (char)character)
			last_found_position = (char *)string;
		string++;
	}
	if ((char)character == '\0')
		return ((char *)string);
	return (last_found_position);
}
