/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:26:21 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/18 19:26:21 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_buf_0_after_nl(char *buf)
{
	int	result;
	int	bufsize;
	int	hasn;

	result = 0;
	bufsize = 0;
	hasn = 0;
	if (!buf)
		return (result);
	while (buf[bufsize])
	{
		if (buf[bufsize] == '\n')
		{
			hasn = 1;
			result = 1;
		}
		if (hasn)
			buf[bufsize] = 0;
		bufsize++;
	}
	return (result);
}

int	ft_cpy_buf(const char *src, char *dst)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}

char	*ft_alloc_read(int fd, char *buf, int index)
{
	char	*tempbuf;
	int		size;

	tempbuf = 0;
	if (index > 1)
	{
		size = BUFFER_SIZE * (index - 1) + 1;
		tempbuf = malloc(size);
		tempbuf[size] = 0;
		ft_cpy_buf(buf, tempbuf);
		free(buf);
	}
	size = (BUFFER_SIZE * index) + 1;
	buf = malloc(size);
	buf[size] = 0;
	if (tempbuf)
	{
		read(fd, buf + ft_cpy_buf(tempbuf, buf), BUFFER_SIZE);
		free(tempbuf);
	}
	else
		read(fd, buf, BUFFER_SIZE);
	return (buf);
}
