/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:43:53 by ebronzin          #+#    #+#             */
/*   Updated: 2023/01/25 14:13:49 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*new;
	size_t		i;

	new = (char *)malloc(count * size);
	if (!new || (count == SIZE_MAX && size > 1)
		|| (count > 1 && size == SIZE_MAX))
		return (0);
	i = 0;
	while (i < (count * size))
	{
		new[i] = 0;
		i++;
	}
	return ((void *)new);
}
