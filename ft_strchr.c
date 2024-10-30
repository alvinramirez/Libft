/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:46:44 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:39:00 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int character)
{
	while (*string != '\0' && character != *string)
	{
		string++;
	}
	if (character == *string)
	{
		return ((char *)string);
	}
	return (NULL);
}
