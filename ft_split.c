/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:10:53 by alvinram          #+#    #+#             */
/*   Updated: 2024/11/01 23:48:02 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(const char *str, char character)
{
	int word_count;
	int inside_word;
	
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

static char *word_duplicate(const char *source, int start_index, int end_index)
{
	char *word;
	int word_index;

	word_index = 0;
	word = malloc((end_index - start_index + 1) * sizeof(char));
	while (start_index < end_index)
		word[word_index++] = source[start_index++];
	word[word_index] = '\0';
	return (word);
	
}

char	**ft_split(char const *string, char character)
{
	size_t	current_position;
	size_t	total_words;
	size_t	word_index;
	char	**result;

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
