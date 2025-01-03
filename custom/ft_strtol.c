/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:42:40 by jarao-de          #+#    #+#             */
/*   Updated: 2024/11/26 16:03:37 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit_value(char digit, int base)
{
	int	value;

	if (ft_isdigit(digit))
		value = digit - '0';
	else if (ft_isalpha(digit))
		value = ft_tolower(digit) - 'a' + 10;
	else
		return (-1);
	if (value >= base)
		return (-1);
	return (value);
}

static int	determine_base(const char **nptr, int base)
{
	if ((base == 0 || base == 16) && **nptr == '0'
		&& ((*nptr)[1] == 'x' || (*nptr)[1] == 'X'))
	{
		base = 16;
		*nptr += 2;
	}
	else if (base == 0 && **nptr == '0')
	{
		base = 8;
		(*nptr)++;
	}
	else if (base == 0)
		base = 10;
	return (base);
}

static int	check_overflow(long *n, int digit, int base, int sign)
{
	if (*n > (LONG_MAX - digit) / base)
	{
		if (sign == 1)
			*n = LONG_MAX;
		else
			*n = LONG_MIN;
		return (1);
	}
	return (0);
}

long	ft_strtol(const char *nptr, char **endptr, int base)
{
	long	n;
	int		sign;
	int		digit;

	if (base != 0 && (base < 2 || base > 36))
		return (0);
	n = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	base = determine_base(&nptr, base);
	while (get_digit_value(*nptr, base) != -1)
	{
		digit = get_digit_value(*nptr++, base);
		if (check_overflow(&n, digit, base, sign))
			break ;
		n = digit + n * base;
	}
	if (endptr)
		*endptr = (char *)nptr;
	return (n * sign);
}
