/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:28:38 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:06:58 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_uchar;
	unsigned char	*s2_uchar;

	if (n == 0)
		return (0);
	s1_uchar = (unsigned char *)s1;
	s2_uchar = (unsigned char *)s2;
	while (n-- > 1 && *s1_uchar == *s2_uchar)
	{
		s1_uchar++;
		s2_uchar++;
	}
	return (*s1_uchar - *s2_uchar);
}
