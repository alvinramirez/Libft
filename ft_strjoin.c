/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:12:14 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:40:21 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *string1, char const *string2)
{
	size_t string1_length;
	size_t string2_length;
	char *join;

	if (!string1 || !string2)
		return (NULL);
	string1_length = ft_strlen(string1);
	string2_length = ft_strlen(string2);
	join = (char *)malloc((string1_length + string2_length + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, string1, string1_length + 1);
	ft_strlcpy((join + string1_length), string2, string2_length + 1);
	return (join);
}
