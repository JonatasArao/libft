/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:45:41 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/16 20:19:23 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (size + src_size);
	size = size - dst_size;
	dst += dst_size;
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_size + src_size);
}
