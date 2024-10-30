/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:24:18 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:39:15 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *source)
{
    char *duplicate;

    duplicate = (char *)malloc(ft_strlen(source) + 1);
    if (!duplicate)
        return NULL;
    ft_memcpy(duplicate, source, ft_strlen(source) + 1);
    return duplicate;
}
