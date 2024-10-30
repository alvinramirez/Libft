/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:10:53 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/30 01:36:51 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_word(const char *string, char character,
		size_t *current_position)
{
	size_t	start;

	while (string[*current_position] && string[*current_position] == character)
		(*current_position)++;
	start = *current_position;
	while (string[*current_position] && string[*current_position] != character)
		(*current_position)++;
	return (ft_substr(string, start, *current_position - start));
}

static char	**allocate_result_array(const char *string, char character,
		size_t *total_words)
{
	char	**result;

	*total_words = count_words(string, character);
	result = malloc((*total_words + 1) * sizeof(char *));
	return (result);
}

static size_t	count_words(const char *string, char character)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*string)
	{
		if (*string != character && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*string == character)
			in_word = 0;
		string++;
	}
	return (count);
}

static char	*get_next_word(const char *string, char character, size_t *index)
{
	size_t	start;

	while (string[*index] && string[*index] == character)
		(*index)++;
	start = *index;
	while (string[*index] && string[*index] != character)
		(*index)++;
	return (ft_substr(string, start, *index - start));
}

static void	*validate_not_null(void *pointer)
{
	if (!pointer)
		return (NULL);
	return (pointer);
}

char	**ft_split(char const *string, char character)
{
	char	**result;
	size_t	current_position;
	size_t	total_words;
	size_t	word_index;

	current_position = 0;
	word_index = 0;
	result = allocate_result_array(string, character, &total_words);
	if ((!validate_not_null((void *)string)) || !validate_not_null(result))
		return (NULL);
	while (word_index < total_words)
	{
		result[word_index] = get_next_word(string, character,
				&current_position);
		if (!result[word_index])
		{
			while (word_index > 0)
				free(result[--word_index]);
			free(result);
			return (NULL);
		}
		word_index++;
	}
	result[word_index] = (NULL);
	return (result);
}
