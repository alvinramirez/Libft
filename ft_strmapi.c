/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:14:26 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:42:27 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *string, char (*function)(unsigned int, char))
{
	char			*new_string;
	unsigned int	index;

	if (!string || !function)
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (!new_string)
		return (NULL);
	index = 0;
	while (string[index])
	{
		new_string[index] = function(index, string[index]);
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}
