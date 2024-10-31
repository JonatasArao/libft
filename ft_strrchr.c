/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:53:36 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:08:15 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;
	char	target_char;

	length = ft_strlen(s);
	s += length;
	target_char = (char)c;
	while (length-- > 0 && *s != target_char)
		s--;
	if (*s == target_char)
		return ((char *)s);
	return (NULL);
}
