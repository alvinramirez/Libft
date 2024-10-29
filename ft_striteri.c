/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:15:32 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 16:00:18 by alvinram         ###   ########.fr       */
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
int main ()
{
	char str[] = "hola, mundo";

	printf("Cadena original: %s\n", str);
	ft_striteri(str, ft_toupper);

	printf("Cadena en mayusculas: %s\n", str);

	return 0;
}