/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:25:15 by jsaldana          #+#    #+#             */
/*   Updated: 2022/11/02 13:12:44 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*int	main(void)
{
	int		fd;
	size_t	j;
	char	*l;
	j = 1;
	fd = open("fd.txt", O_RDONLY);
	l = get_next_line(fd);
	while (l)
	{
		printf("%zu-%s", j, l);
		free(l);
		j++;
		l = get_next_line(fd);
	}
	printf("-%s", l);
	close(fd);
	return 0;
}*/

char	*get_next_line(int fd)
{
	static char	*document_saved[1024];
	char		*write_readed_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	document_saved[fd] = ft_read_line(fd, document_saved[fd]);
	if (!document_saved[fd])
		return (NULL);
	write_readed_line = ft_write_readed_line(document_saved[fd]);
	document_saved[fd] = ft_remove_writed_line(document_saved[fd]);
	return (write_readed_line);
}

char	*ft_read_line(int fd, char *line)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(line, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		line = ft_strjoin(line, buff);
	}
	free(buff);
	return (line);
}

char	*ft_write_readed_line(char *document)
{
	int		counter;
	char	*new_writed_line;

	counter = 0;
	if (!document[counter])
		return (NULL);
	while (document[counter] != '\n' && document[counter] != '\0')
		counter++;
	new_writed_line = malloc(sizeof(char) * counter + 2);
	if (!new_writed_line)
		return (NULL);
	counter = 0;
	while (document[counter] && document[counter] != '\n')
	{
		new_writed_line[counter] = document[counter];
		counter++;
	}
	if (document[counter] == '\n')
	{
		new_writed_line[counter] = document[counter];
		counter++;
	}
	new_writed_line[counter] = '\0';
	return (new_writed_line);
}

char	*ft_remove_writed_line(char *document)
{
	int		counter;
	int		counter_removed;
	char	*new_document;

	counter = 0;
	while (document[counter] && document[counter] != '\n')
		counter++;
	if (!document[counter])
	{
		free(document);
		return (NULL);
	}
	new_document = malloc(sizeof(char) * (ft_strlen(document) - counter + 1));
	if (!new_document)
		return (NULL);
	counter++;
	counter_removed = 0;
	while (document[counter])
		new_document[counter_removed++] = document[counter++];
	new_document[counter_removed] = '\0';
	free(document);
	return (new_document);
}
