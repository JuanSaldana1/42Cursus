/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:07:19 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/12 11:18:51 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	total_size;
	size_t	dst_len;
	size_t	src_len;
	size_t	count;

	count = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_size = (dst_len + src_len);
	if (dst_len >= destsize)
		return (destsize + src_len);
	while (destsize - 1 > dst_len && src[count] != '\0')
	{
		dst[dst_len] = src[count];
		count++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (total_size);
}
