/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:27:17 by                   #+#    #+#             */
/*   Updated: 2022/12/01 19:31:27 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void showbits(int pid, char n)
{
	int	i = 8;
	while (i--)
	{
		if (n >> i & 1)
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		usleep(100);
	}
}

int	main(int argc, const char *argv[])
{
	int	i = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			showbits(ft_atoi(argv[1]), argv[2][i]);
			i++;
		}
		printf("my pid is %d\n", getpid());
	}
	return (0);
}
