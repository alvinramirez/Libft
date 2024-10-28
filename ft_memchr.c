/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:47:51 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 03:41:54 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string, int character, size_t number)
{
	size_t				count;
	const unsigned char	*tmp_string = (const unsigned char *)string;

	count = 0;
	while (count < number)
	{
		if (((unsigned char *)string)[count] == (unsigned char)character)
		{
			return ((void *)(tmp_string + count));
		}
		count++;
	}
	return (0);
}
int main ()
{
    char arr[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    char *result = ft_memchr(arr, 'l', 6);

    if (result != 0) {
        printf("Carácter encontrado: %c\n", *result);
    } else {
        printf("Carácter no encontrado.\n");
    }
    return 0;
}