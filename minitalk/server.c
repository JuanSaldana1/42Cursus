/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:31:31 by                   #+#    #+#             */
/*   Updated: 2022/10/21 12:05:25 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	first_step(void)
{
	pid_t	pid;

	pid = fork();
	if (pid > 0)
		printf("%i\n", (int)pid);
	else if (pid == 0)
		return_to_server(pid, "Mensaje del servidor al cliente");
	else
		printf("Ha ocurrido un error");
}

void	sent_from_client(char *str)
{
	printf("%s\n", str);
}
