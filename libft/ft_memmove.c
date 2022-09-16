/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:18:55 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/16 11:27:56 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	size_t	i;

	source = (char *)src;
	destination = (char *)dest;
	i = 0;
	if ((dest != (void *)0) || (src != (void *)0))
	{
		if (destination > source)
			while (len-- > 0)
				destination[len] = source[len];
		else
		{
			while (i < len)
			{
				destination[i] = source[i];
				i++;
			}
		}
	}
	return (dest);
}
