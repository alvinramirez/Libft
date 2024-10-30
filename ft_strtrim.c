/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:11:24 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:44:06 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *string, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!string || !set)
		return (NULL);
	end = ft_strlen(string);
	while (string[start] && ft_strchr(set, string[start]))
		start++;
	while (end > start && ft_strchr(set, string[end - 1]))
		end--;
	return (ft_substr(string, start, end - start));
}
