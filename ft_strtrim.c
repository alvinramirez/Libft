/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:11:24 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/29 18:08:25 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *string, char const *set)
{
    size_t start = 0;
    size_t end;

    if (!string || !set)
        return (NULL);

    // Calcula el tamaño inicial de string para el índice final
    end = ft_strlen(string);

    // Incrementa start mientras el inicio contenga caracteres de set
    while (string[start] && ft_strchr(set, string[start]))
        start++;

    // Decrementa end mientras el final contenga caracteres de set
    while (end > start && ft_strchr(set, string[end - 1]))
        end--;

    // Crea una subcadena desde el índice start hasta end
    return (ft_substr(string, start, end - start));
}

int main()
{
    // Caso 1: Elimina espacios al inicio y al final
    char *string1 = "   Hello, world!   ";
    char *set1 = " ";
    char *result1 = ft_strtrim(string1, set1);
    printf("Original: '%s'\n", string1);
    printf("Resultado (espacios recortados): '%s'\n\n", result1);
    free(result1);

    // Caso 2: Elimina guiones al inicio y al final
    char *string2 = "--Hello, world!--";
    char *set2 = "-";
    char *result2 = ft_strtrim(string2, set2);
    printf("Original: '%s'\n", string2);
    printf("Resultado (guiones recortados): '%s'\n\n", result2);
    free(result2);

    // Caso 3: Elimina varios caracteres del conjunto al inicio y al final
    char *string3 = "**~~Hello, world!~~**";
    char *set3 = "*~";
    char *result3 = ft_strtrim(string3, set3);
    printf("Original: '%s'\n", string3);
    printf("Resultado (asteriscos y tildes recortados): '%s'\n\n", result3);
    free(result3);

    // Caso 4: Cadena sin caracteres a recortar
    char *string4 = "Hello, world!";
    char *set4 = "-";
    char *result4 = ft_strtrim(string4, set4);
    printf("Original: '%s'\n", string4);
    printf("Resultado (sin cambios): '%s'\n\n", result4);
    free(result4);

    // Caso 5: `set` contiene todos los caracteres de la cadena
    char *string5 = "*****";
    char *set5 = "*";
    char *result5 = ft_strtrim(string5, set5);
    printf("Original: '%s'\n", string5);
    printf("Resultado (cadena vacía): '%s'\n\n", result5);
    free(result5);

    // Caso 6: `string` es una cadena vacía
    char *string6 = "";
    char *set6 = "*";
    char *result6 = ft_strtrim(string6, set6);
    printf("Original: '%s'\n", string6);
    printf("Resultado (cadena vacía): '%s'\n\n", result6);
    free(result6);

    return 0;
}