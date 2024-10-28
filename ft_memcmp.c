/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:48:14 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 04:02:16 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *string1, const void *string2, size_t number)
{
	size_t				count;
	const unsigned char	*tmp_string1;
	const unsigned char	*tmp_string2;

	tmp_string1 = (const unsigned char *)string1;
	tmp_string2 = (const unsigned char *)string2;
	count = 0;
	while (count < number)
	{
		if ((tmp_string1)[count] != (tmp_string2)[count])
		{
			return ((tmp_string1)[count] - (tmp_string2)[count]);
		}
		count++;
	}
	return (0);
}

int main(void) {
    char block1[] = { 'a', 'b', 'c', 'd' };
    char block2[] = { 'a', 'b', 'c', 'e' };

    int result = ft_memcmp(block1, block2, 4);

    if (result == 0) {
        printf("Los bloques de memoria son iguales.\n");
    } else if (result < 0) {
        printf("El primer bloque es menor que el segundo.\n");
    } else {
        printf("El primer bloque es mayor que el segundo.\n");
    }

    return 0;
}