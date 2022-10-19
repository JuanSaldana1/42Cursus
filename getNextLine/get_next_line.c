/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:25:15 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/18 19:28:48 by jsaldana         ###   ########.fr       */
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

/* int	main(void)
{
	int		fd;
	char	*print;

	fd = open("./res/test1.txt", O_RDONLY);
	print = get_next_line(fd);
	printf("%s\n", print);
	print = get_next_line(fd);
	printf("%s\n", print);
	print = get_next_line(fd);
	printf("%s\n", print);
	free(print);
	close(fd);
	return (0);
} */
