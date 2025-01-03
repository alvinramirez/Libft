/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:10:53 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/14 23:38:26 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char character)
{
	int	word_count;
	int	inside_word;

	word_count = 0;
	inside_word = 0;
	while (*str)
	{
		if (*str != character && inside_word == 0)
		{
			inside_word = 1;
			word_count++;
		}
		else if (*str == character)
			inside_word = 0;
		str++;
	}
	return (word_count);
}

static char	*word_duplicate(const char *source, int start_index, int end_index)
{
	char	*word;
	int		word_index;

	word_index = 0;
	word = malloc((end_index - start_index + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start_index < end_index)
		word[word_index++] = source[start_index++];
	word[word_index] = '\0';
	return (word);
}

static void free_split(char **split, size_t words_allocated)
{
	
}

char	**ft_split(char const *s, char c)
{
	size_t	string_index;
	size_t	word_index;
	int		start_index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	string_index = 0;
	word_index = 0;
	start_index = -1;
	while (string_index <= ft_strlen(s))
	{
		if (s[string_index] != c && start_index < 0)
			start_index = string_index;
		else if ((s[string_index] == c || string_index == ft_strlen(s))
			&& start_index >= 0)
		{
			split[word_index++] = word_duplicate(s, start_index, string_index);
			start_index = -1;
		}
		string_index++;
	}
	split[word_index] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	string_index;
	size_t	word_index;
	int		start_index;
	char	**split;

	// Verificación de `s` antes de contar palabras
	if (!s)
		return (NULL);
	
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	string_index = 0;
	word_index = 0;
	start_index = -1;
	while (string_index <= ft_strlen(s))
	{
		if (s[string_index] != c && start_index < 0)
			start_index = string_index;
		else if ((s[string_index] == c || string_index == ft_strlen(s)) && start_index >= 0)
		{
			split[word_index] = word_duplicate(s, start_index, string_index);
			if (!split[word_index]) // Verificar si la asignación de word_duplicate falló
			{
				free_split(split, word_index); // Liberar toda la memoria asignada
				return (NULL);
			}
			word_index++;
			start_index = -1;
		}
		string_index++;
	}
	split[word_index] = NULL; // Agregar el terminador nulo final
	return (split);
}
