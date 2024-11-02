/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:33:19 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/02 23:24:58 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Parte I - Funciones de Libc

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *string_length);
void	*ft_memset(void *pointer, int memory_value, size_t bytes_length);
void	ft_bzero(void *byte_pointer, size_t byte_number);
void	*ft_memcpy(void *destination, const void *source, size_t byte_number);
void	*ft_memmove(void *destination, const void *source, size_t byte_number);
size_t	ft_strlcpy(char *destination, const char *source,
			size_t destination_size);
size_t	ft_strlcat(char *destination, const char *source,
			size_t destination_size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *string, int character);
char	*ft_strrchr(const char *string, int character);
int		ft_strncmp(const char *string1, const char *string2, size_t number);
void	*ft_memchr(const void *string, int character, size_t number);
int		ft_memcmp(const void *string1, const void *string2, size_t number);
char	*ft_strnstr(const char *haystack, const char *needle, size_t length);
int		ft_atoi(const char *string);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *source);

// Parte II - Funciones adicionales

char	*ft_substr(char const *string, unsigned int start, size_t length);
char	*ft_strjoin(char const *string1, char const *string2);
char	*ft_strtrim(char const *string, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int number);
char	*ft_strmapi(char const *string, char (*function)(unsigned int, char));
void	ft_striteri(char *string, void (*function)(unsigned int, char *));
void	ft_putchar_fd(char c, int file_descriptor);
void	ft_putstr_fd(char const *string, int file_descriptor);
void	ft_putendl_fd(char const *string, int file_descriptor);
void	ft_putnbr_fd(int number, int file_descriptor);

#endif