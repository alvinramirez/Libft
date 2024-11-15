/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:15:32 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:39:25 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *string, void (*function)(unsigned int, char *))
{
	unsigned int	count;

	count = 0;
	if (string == 0 || function == 0)
	{
		return ;
	}
	while (string[count])
	{
		(*function)(count, &string[count]);
		count++;
	}
}
