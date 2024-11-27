/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 06:44:01 by jarao-de          #+#    #+#             */
/*   Updated: 2024/11/27 06:44:26 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_matrix(void **matrix, size_t size)
{
	while (size-- > 0)
		free(matrix[size]);
	free(matrix);
	return (NULL);
}
