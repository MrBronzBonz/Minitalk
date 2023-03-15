/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:10:28 by ebronzin          #+#    #+#             */
/*   Updated: 2023/01/25 14:27:45 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*unsstr;
	unsigned char	unchar;

	i = 0;
	unsstr = (unsigned char *)s;
	unchar = (unsigned char)c;
	while ((size_t)i < n)
	{
		if (*unsstr == unchar)
			return (unsstr);
		unsstr++;
		i++;
	}
	return (NULL);
}
