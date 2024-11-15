/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:39:45 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/13 22:50:29 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	index;
	int	number_sign;
	int	result;

	index = 0;
	number_sign = 1;
	result = 0;
	while (string[index] && (ft_isspace(string[index])))
		index++;
	if (string[index] == '-')
		number_sign = -1;
	if (string[index] == '+' || string[index] == '-')
		index++;
	while (string[index] && ft_isdigit(string[index]))
	{
		result = result * 10 + (string[index] - 48);
		index++;
	}
	return (result * number_sign);
}
