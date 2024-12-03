/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:58:43 by jarao-de          #+#    #+#             */
/*   Updated: 2024/12/03 09:38:04 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
{
	char	*token;

	if (str)
		*saveptr = str;
	if (!(*saveptr))
		return (NULL);
	while (**saveptr && ft_strchr(delim, **saveptr))
		(*saveptr)++;
	if (!(**saveptr))
		return (NULL);
	token = *saveptr;
	while (**saveptr && !ft_strchr(delim, **saveptr))
		(*saveptr)++;
	if (**saveptr)
	{
		**saveptr = '\0';
		(*saveptr)++;
	}
	return (token);
}
