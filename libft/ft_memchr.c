/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:13:31 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/13 17:32:51 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;

	count = 0;
	str = (unsigned char *)s;
	while (count < n)
	{
		if (str[count] == (unsigned char)c)
			return (str + count);
		count++;
	}
	return (0);
}
