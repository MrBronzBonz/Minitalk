/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:16:03 by ebronzin          #+#    #+#             */
/*   Updated: 2023/01/24 12:52:36 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{		
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

/*int main(void)
{
	char i;
	char p;
	char e;

	i = 'a';
	p = 'G';
	e = '3';

	printf("R = %c\n", tolower(i));
	printf("M = %c\n", ft_tolower(i));
	printf("R = %c\n", tolower(p));
	printf("M = %c\n", ft_tolower(p));
	printf("R = %c\n", tolower(e));
	printf("M = %c\n", ft_tolower(e));
}*/
