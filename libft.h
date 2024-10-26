/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:33:19 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/24 21:22:02 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

// Parte I - Funciones de Libc

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *str);
void    *ft_memset(void *pointer, int value, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *gst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dest, const char *src, size_t dstsize);
int ft_toupper(int character);
int ft_tolower(int character);
char    *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);

// Parte II - Funciones adicionales

char *ft_substr(char const *s, unsigned int start, size_t len);


#endif