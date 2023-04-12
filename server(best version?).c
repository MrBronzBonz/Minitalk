/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:52:12 by ebronzin          #+#    #+#             */
/*   Updated: 2023/03/15 12:31:14 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_sigusr(int signum, siginfo_t *info, void *ucontent)
{
	static int				bit_itr = -1;
	static unsigned char	c;

	(void)ucontent;
	if (bit_itr < 0)
		bit_itr = 7;
	if (signum == SIGUSR1)
		c |= (1 << bit_itr);
	bit_itr--;
	if (bit_itr < 0 && c)
	{
		write(1, &c, 1);
		c = 0;
	}
}

void	config_signals(void)
{
	struct sigaction	sa_newsig;

	sa_newsig.sa_sigaction = &handle_sigusr;
	//la funzione che segue serve a ottenere informazioni sui segnali e non é fondamentale in questo contesto, se non addirittura vietata (LOL)
	sa_newsig.sa_flags = SA_SIGINFO;
}

int	main(void)
{
	pid_t	pid;
  struct sigaction	sa_newsig;
	
  pid = getpid();
	ft_printf("SERVER PID = %d\n\n", pid);
  while (1)
		config_signals();
	return (EXIT_SUCCESS);
}
