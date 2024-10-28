/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:43:36 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/25 21:32:52 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/** 
 * Esta es una funcion que escribe n bytes a cero en la cadena byte_number,
 * borra los datos en los n bytes de la memoria comenzando en la ubicacion
 * apuntada por byte_pointer, escribiendo ceros (bytes que contienen '\0')
 * en esa zona.
 * 
 * @param void byte_pointer es el puntero a la zona de memoria que se va a rellenar.
 * @param size_t byte_number el numero de bytes a poner a cero.
 */

void	ft_bzero(void *byte_pointer, size_t byte_number)
{
	ft_memset(byte_pointer, '\0', byte_number);
}

int main ()
{
    char str[20] = "Hola Mundo desde C,";
    int num = 5; // Cambia este valor para modificar la cantidad de caracteres a poner en 0

    // Muestra el mensaje original
    printf("Mensaje original: %s\n", str);

    // Llama a ft_bzero para poner en 0 los primeros "num" caracteres
    ft_bzero(str, num);

    // Muestra el resultado después de aplicar ft_bzero
    printf("Mensaje después de ft_bzero: ");
    for (int i = 0; i < 20; i++) {
        if (str[i] == '\0') {
            printf("\\0");  // Representa los caracteres nulos como "\0" para visualización
        } else {
            putchar(str[i]);
        }
    }
    printf("\n");

    return 0;
}
