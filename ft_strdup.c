/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:24:18 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 15:47:49 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *string1)
{
    char *string2;

    string2 = (char *)malloc(ft_strlen(string1) + 1);
    if (!string2)
        return NULL;
    ft_memcpy(string2, string1, ft_strlen(string1) + 1);
    return string2;
}
int main() 
{
    // Caso de prueba 1: Cadena simple
    const char *original1 = "Hola, Mundo";
    char *copy1 = ft_strdup(original1);

    if (copy1) 
    {
        printf("Original: %s\n", original1);
        printf("Copia: %s\n", copy1);
        free(copy1);  // Liberar la memoria asignada
    } 
    else 
    {
        printf("Error al duplicar la cadena.\n");
    }

    // Caso de prueba 2: Cadena vacia
    const char *original2 = "";
    char *copy2 = ft_strdup(original2);

    if (copy2) 
    {
        printf("Original (vacío): \"%s\"\n", original2);
        printf("Copia (vacío): \"%s\"\n", copy2);
        free(copy2);
    } 
    else 
    {
        printf("Error al duplicar la cadena vacía.\n");
    }

    // Caso de prueba 3: Cadena con caracteres especiales
    const char *original3 = "Programar\nen C\tes genial";
    char *copy3 = ft_strdup(original3);

    if (copy3) 
    {
        printf("Original con caracteres especiales: %s\n", original3);
        printf("Copia con caracteres especiales: %s\n", copy3);
        free(copy3);
    } 
    else 
    {
        printf("Error al duplicar la cadena con caracteres especiales.\n");
    }

    return 0;
}