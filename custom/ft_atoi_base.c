/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:42:40 by jarao-de          #+#    #+#             */
/*   Updated: 2024/11/26 16:03:37 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_valid_base(char *base)
{
	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-'
			|| *base <= ' ' || *base > '~'
			|| ft_strrchr(base, *base) != base)
			return (0);
		base++;
	}
	return (1);
}

static ssize_t	get_base_value(char str, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == str)
			return (index);
		index = index + 1;
	}
	return (-1);
}

int	ft_atoi_base(const char *nptr, char *base)
{
	int	n;
	int	sign;
	int	base_n;

	if (is_valid_base(base) == 0)
		return (0);
	n = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	base_n = ft_strlen(base);
	while (get_base_value(*nptr, base) != -1)
		n = get_base_value(*nptr++, base) + n * base_n;
	return (n * sign);
}
