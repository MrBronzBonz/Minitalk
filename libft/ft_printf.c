/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:31:34 by ebronzin          #+#    #+#             */
/*   Updated: 2023/03/15 09:24:17 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_organize(va_list list, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_putchar(va_arg(list, int));
	else if (format == 'd')
		print += ft_putnumbr(va_arg(list, int));
	else if (format == '%')
		print += ft_putchar('%');
	else if (format == 's')
		print += ft_putstr(va_arg(list, char *));
	else if (format == 'u')
		print += ft_putunsnumbr(va_arg(list, unsigned int));
	else if (format == 'i')
		print += ft_putnumbr(va_arg(list, int));
	else if (format == 'x' || format == 'X')
		print += ft_putesadecimal(va_arg(list, unsigned int), format);
	else if (format == 'p')
		print += ft_putptr(va_arg(list, uintptr_t));
	return (print);
}

int	ft_printf(const char *token, ...)
{
	va_list	list;
	int		count;
	int		num;

	va_start(list, token);
	count = 0;
	num = 0;
	while (token[count])
	{
		if (token[count] == '%')
		{
			num += ft_organize(list, token[count + 1]);
			count++;
		}
		else
			num += ft_putchar(token[count]);
		count++;
	}
	va_end(list);
	return (num);
}
