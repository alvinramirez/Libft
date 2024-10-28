/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:19:30 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/27 19:57:08 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char const *string, int file_descriptor)
{
    if (string == NULL)
    {
        return;
    }
        write(file_descriptor, string, ft_strlen(string));
}
