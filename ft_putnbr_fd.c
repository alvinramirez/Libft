/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:24:11 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 00:19:49 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int number, int file_descriptor)
{
	if (number == -2147483648)
	{
		ft_putchar_fd('-', file_descriptor);
		ft_putchar_fd('2', file_descriptor);
		ft_putnbr_fd(147483648, file_descriptor);
	}
	else if (number < 0)
	{
		ft_putchar_fd('-', file_descriptor);
		ft_putnbr_fd(-number, file_descriptor);
	}
	else if (number > 9)
	{
		ft_putnbr_fd(number / 10, file_descriptor);
		ft_putchar_fd((number % 10) + '0', file_descriptor);
	}
	else
	{
		ft_putchar_fd(number + '0', file_descriptor);
	}
}
