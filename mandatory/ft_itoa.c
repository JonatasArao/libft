/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:40:47 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/31 14:14:53 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numsize(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*n_char;
	int		numsize;
	int		sign;

	numsize = ft_numsize(n);
	n_char = (char *)ft_calloc(numsize + 1, sizeof(char));
	if (!n_char)
		return (NULL);
	sign = 1;
	if (n == 0)
		n_char[0] = '0';
	if (n < 0)
	{
		n_char[0] = '-';
		sign = -1;
	}
	while (n)
	{
		n_char[--numsize] = '0' + sign * (n % 10);
		n /= 10;
	}
	return (n_char);
}
