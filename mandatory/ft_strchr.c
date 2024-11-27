/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:38:06 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:07:25 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target_char;

	target_char = (char)c;
	while (*s && *s != target_char)
		s++;
	if (*s == target_char)
		return ((char *)s);
	return (NULL);
}
