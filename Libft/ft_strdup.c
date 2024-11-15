/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:24:18 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/04 19:54:58 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*duplicate;

	duplicate = (char *)malloc(ft_strlen(source) + 1);
	if (!duplicate)
		return (NULL);
	ft_memcpy(duplicate, source, ft_strlen(source) + 1);
	return (duplicate);
}
