/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:04:04 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:07:11 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_uchar;
	unsigned char	*src_uchar;

	if (!dest && !src)
		return (dest);
	dest_uchar = (unsigned char *)dest;
	src_uchar = (unsigned char *)src;
	if (dest_uchar > src_uchar)
	{
		dest_uchar += n;
		src_uchar += n;
		while (n-- > 0)
			*--dest_uchar = *--src_uchar;
	}
	else
		while (n-- > 0)
			*dest_uchar++ = *src_uchar++;
	return (dest);
}
