/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:21:11 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/21 12:03:44 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_x;

static void	handle_sigusr1(int sig)
{
	if (g_x == 0)
		printf("\n(hint)Remember multiplication is repetitive addition\n");
}

int	main(int argc, char const *argv[])
{
	while (1)
	{
		sleep(2);
		first_step();
	}
	return (0);
}
