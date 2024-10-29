/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:13:10 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 10:10:24 by alvinram         ###   ########.fr       */
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

int main()
{
    int test_numbers[] = {1234, -5678, 0, -2147483648, 2147483647};
    size_t num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (size_t i = 0; i < num_tests; i++)
    {
        char *result = ft_itoa(test_numbers[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", test_numbers[i], result);
            free(result);  // Liberar memoria asignada
        }
        else
        {
            printf("Error al convertir el número %d.\n", test_numbers[i]);
        }
    }

    return 0;
}