/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:54:41 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/16 15:51:50 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (src_size);
}
