/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:12:26 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:15:55 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_multiplication_overflow(size_t x, size_t y)
{
	if (x && y && (x * y) / x != y && (x * y) / y != x)
		return (1);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (ft_check_multiplication_overflow(nmemb, size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	if (nmemb && size)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
