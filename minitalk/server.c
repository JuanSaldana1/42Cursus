/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:31:31 by                   #+#    #+#             */
/*   Updated: 2022/11/03 11:32:13 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int	pid;
	struct sigaction	s_sigaction;

	pid = getpid();
	printf("%d", pid);
	s_sigaction.sa_flags = SA_SIGINFO;
	while (1)
		pause();
	return (0);
}
