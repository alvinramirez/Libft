/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:47:28 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:42:52 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t number)
{
	size_t				count;
	const unsigned char	*tmp_string1 = (const unsigned char *)string1;
	const unsigned char	*tmp_string2 = (const unsigned char *)string2;

	count = 0;
	while ((count < number) && (tmp_string1[count] || tmp_string2[count]))
	{
		if (tmp_string1[count] != tmp_string2[count])
		{
			return (tmp_string1[count] - tmp_string2[count]);
		}
		count++;
	}
	return (0);
}
