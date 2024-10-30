/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:22 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/25 21:26:47 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
 * Esta funcion toma un puntero a una posicion de memoria,
 * un valor a establecer y el numero de bytes a establecer,
 * y devuelve un puntero a la posicion de memoria.
 * 
 * @param void pointer es un puntero al area de memoria a rellenar.
 * @param int memory_value el valor a establecer que queremos llenar en cada byte de la memoria.
 * @param size_t bytes_length el numero de bytes que se asignaran al valor value.
 * 
 * @return pointer osea un puntero al area de memoria memory_value.
 */

void	*ft_memset(void *pointer, int memory_value, size_t bytes_length)
{
	unsigned char	*byte_pointer;
	size_t			count;

	count = 0;
	byte_pointer = pointer;
	while (count < bytes_length)
	{
		byte_pointer[count] = (unsigned char)memory_value;
		count++;
	}
	return (pointer);
}

int main ()
{
     char str[50];

     strcpy(str,"Esto es un ejemplo de esta funcion");
     puts(str);

     ft_memset(str,'$',7);
     puts(str);

     return(0);
}