/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:03:49 by ebronzin          #+#    #+#             */
/*   Updated: 2023/01/26 10:32:56 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (0);
	i = ft_strlen(s);
	len_s = 0;
	if (start < i)
		len_s = i - start;
	if (len_s > len)
		len_s = len;
	sub = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, len_s + 1);
	return (sub);
}
