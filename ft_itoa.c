/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:13:10 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:32:20 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(long number)
{
	int	count;

	count = 0;
	if (number <= 0)
	{
		count++;
		number = number - 1;
	}
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int number)
{
	int			length;
	char		*string;
	long int	temp_number;

	length = count_char(number);
	temp_number = number;
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (!string)
		return (NULL);
	string[length--] = '\0';
	if (temp_number < 0)
	{
		string[0] = '-';
		temp_number = -temp_number;
	}
	if (temp_number == 0)
		string[0] = '0';
	while (temp_number > 0)
	{
		string[length--] = ((temp_number % 10) + '0');
		temp_number = temp_number / 10;
	}
	return (string);
}
