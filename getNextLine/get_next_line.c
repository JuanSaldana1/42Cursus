/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:05:56 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/17 12:09:48 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	void	*buf;

	buf = 0;
	i = 1;
	while (!ft_buf_0_after_nl(buf))
	{
		buf = ft_alloc_read(fd, buf, i);
		i++;
	}
	return (buf);
}

int	main(void)
{
	int		fd;
	char	*print;

	fd = open("./res/test1.txt", O_RDWR);
	print = get_next_line(fd);
	printf("%s\n", print);
	free(print);
	print = get_next_line(fd);
	printf("%s\n", print);
	free(print);
	print = get_next_line(fd);
	printf("%s\n", print);
	free(print);
	return (0);
}
