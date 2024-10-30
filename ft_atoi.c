/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:39:45 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:31:23 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	remove_spaces(const char *string)
{
	int	count;

	count = 0;
	while (string[count] == ' ' || string[count] == '\t'
		|| string[count] == '\n' || string[count] == '\r'
		|| string[count] == '\v' || string[count] == '\f')
		count++;
	return (count);
}

static unsigned long	final_number(const char *string, int start_index,
		int end_index)
{
	unsigned long	result;
	unsigned long	place_value;

	place_value = 1;
	result = 0;
	end_index--;
	while (start_index <= end_index)
	{
		result = result + ((string[end_index] - '0') * place_value);
		place_value = place_value * 10;
		end_index--;
	}
	return (result);
}

int	ft_atoi(const char *string)
{
	int				position;
	int				sign_factor;
	unsigned long	final_numeric_value;
	int				start_index;

	position = remove_spaces(string);
	sign_factor = 1;
	if (string[position] == '+' || string[position] == '-')
		if (string[position++] == '-')
			sign_factor = -1;
	if (!ft_isdigit(string[position]))
		return (0);
	start_index = position;
	while (ft_isdigit(string[position]))
		position++;
	final_numeric_value = final_number(string, start_index, position);
	if (final_numeric_value > __LONG_MAX__ && sign_factor == 1)
		return (-1);
	else if (final_numeric_value > __LONG_MAX__ && sign_factor == -1)
		return (0);
	return ((int)(sign_factor * final_numeric_value));
}
