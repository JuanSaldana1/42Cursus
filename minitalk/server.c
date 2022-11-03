/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:31:31 by                   #+#    #+#             */
/*   Updated: 2022/11/03 12:44:36 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
void sig_handler(int signum)
{
  printf("\nSERVER RECIEVED SIGNAL (%d)\n", signum);
}

int	main(void)
{
	int	pid;
	// struct sigaction	s_sigaction;

	pid = getpid();
	ft_putnbr(pid);
	signal(SIGUSR1, sig_handler);
	// s_sigaction.sa_flags = SA_SIGINFO;
	while (1)
		sleep(1);
	return (0);
}
