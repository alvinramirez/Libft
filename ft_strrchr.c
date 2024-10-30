/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:22:16 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:43:20 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	char	*last_found_position;
	char	*current_position;

	last_found_position = 0;
	current_position = (char *)string;
	current_position = ft_strchr(current_position, character);
	while (current_position != 0)
	{
		last_found_position = current_position;
		current_position++;
		current_position = ft_strchr(current_position, character);
	}
	return (last_found_position);
}
