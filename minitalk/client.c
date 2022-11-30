/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:27:17 by                   #+#    #+#             */
/*   Updated: 2022/11/30 19:36:49 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>
void showbits (int pid, unsigned char n)
{
	int	i = 8;
	while (i--)
	{
		if (n >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
	}
	printf("\n");
}
int	main(int argc, const char *argv[])
{
	if (argc == 3)
	{
		showbits(ft_atoi(argv[1]), 'a');
		printf("my pid is %d\n", getpid());
	}
	return (0);
}
