/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:26:10 by jarao-de          #+#    #+#             */
/*   Updated: 2024/11/27 08:23:34 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_word_count(char const *s, char c)
{
	unsigned int	counter;
	unsigned int	is_word;

	counter = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			counter++;
			is_word = 1;
		}
		else if (*s == c && is_word)
			is_word = 0;
		s++;
	}
	return (counter);
}

static char	*ft_get_next_word(char const **s, char c)
{
	char			*word;
	unsigned int	start;
	size_t			end;

	start = 0;
	while ((*s)[start] && (*s)[start] == c)
		start++;
	end = start;
	while ((*s)[end] && (*s)[end] != c)
		end++;
	word = ft_substr(*s, start, end - start);
	if (!word)
		return (NULL);
	*s += end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	word_count;
	unsigned int	i;

	word_count = ft_word_count(s, c);
	split = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		split[i] = ft_get_next_word(&s, c);
		if (!split[i])
			return (ft_free_matrix((void **)split, i));
		i++;
	}
	return (split);
}
