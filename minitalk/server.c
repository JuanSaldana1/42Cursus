/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:31:31 by                   #+#    #+#             */
/*   Updated: 2022/11/30 19:30:45 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void sig_handler(int signum, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	
	
	if (signum == SIGUSR1)
	{
		printf("1");
		// printf("\nSERVER RECIEVED SIGUSR1 from: (%d)\n", info->si_pid);
		// printf("%s\n", (char *)info->si_value.sival_ptr);
		// printf("%d\n", info->si_value.sival_int);
		// printf("%d\n", info->si_code);
		// printf("%s\n", context);
	}
	if (signum == SIGUSR2)
		printf("0");
		// printf("\nSERVER RECIEVED SIGUSR2 (%d)\n", signum);

}

int	main(void)
{
	int					pid;
	struct sigaction	sig_action;

	pid = getpid();
	ft_putnbr(pid);
	sig_action.sa_flags = SA_SIGINFO;
	sig_action.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &sig_action, NULL);
	sigaction(SIGUSR2, &sig_action, NULL);
	while (1)
		sleep(1);
	return (0);
}
