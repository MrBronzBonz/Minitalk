/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintfnumbrs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:58:27 by ebronzin          #+#    #+#             */
/*   Updated: 2023/03/15 09:26:04 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ll_length(long long nb, int base)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb && ++count)
		nb /= base;
	return (count);
}

int	ft_putunsnumbr(unsigned int nb)
{
	if (nb == 4294967295)
	{
		ft_putnumbr(nb / 10);
		ft_putchar('5');
	}
	else
	{
		if (nb > 9)
			ft_putnumbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
	if (nb < 0)
		return (ll_length(4294967295 - nb + 1, 10));
	return (ll_length(nb, 10));
}
