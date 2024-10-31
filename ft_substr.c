/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:41:58 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:29:39 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		substr = ft_strdup("");
		if (!substr)
			return (NULL);
	}
	else
	{
		if (len > s_len - start)
			len = s_len - start;
		substr = (char *)malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, s + start, len + 1);
	}
	return (substr);
}
