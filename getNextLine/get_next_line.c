/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:25:15 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/19 19:38:00 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	t_fd	*ft_get_node(int fd, t_fd *node)
{
	if (!node)
	{
		node = malloc(sizeof(t_fd));
		node->fd = fd;
	}
	return (node);
}

static	int	get_str(int fd, t_fd *node, int rd)
{
	char	*buffer;
	char	*aux;

	buffer = malloc(2);
	node->str = malloc(1);
	node->str[0] = 0;
	while (rd > 0)
	{
		rd = read(fd, buffer, 1);
		if (rd <= 0 && node->str[0] == 0)
		{
			free(buffer);
			return (1);
		}
		else if (rd == 0)
			break ;
		buffer[1] = 0;
		aux = ft_strjoin(node->str, buffer);
		node->str = ft_strdup(aux);
		free(aux);
		if (node->str[ft_strlen(node->str) - 1] == '\n' )
			break ;
	}
	free(buffer);
	return (0);
}

char	*get_next_line(int fd)
{
	static t_fd	*node;
	int			eof;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	node = ft_get_node(fd, node);
	eof = get_str(fd, node, 1);
	if (eof == 1)
	{
		free(node->str);
		free(node);
		node = NULL;
		return (NULL);
	}
	if (node->str[0] == 0 || node->eof == 1)
		return (NULL);
	return (node->str);
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
