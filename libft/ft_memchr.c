/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:13:31 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/13 12:29:14 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;
	char	*str;

	count = 0;
	str = s;
	while (str[count] < n)
	{
		if (str[count] == c)
			return ((void *)(count));
		else
			return (NULL);
		count++;
	}
}
