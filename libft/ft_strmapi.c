/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:18:41 by ebronzin          #+#    #+#             */
/*   Updated: 2023/01/25 08:43:43 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new;

	i = 0;
	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
