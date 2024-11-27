/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:11:51 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:06:45 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_uchar;
	unsigned char	c_uchar;

	if (n == 0)
		return (NULL);
	s_uchar = (unsigned char *)s;
	c_uchar = (unsigned char)c;
	while (n-- > 1 && *s_uchar != c_uchar)
	{
		s_uchar++;
		s++;
	}
	if (*s_uchar == c_uchar)
		return ((void *)s);
	return (NULL);
}
