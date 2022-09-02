/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:29:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/02 12:23:57 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *origin, void *destination, size_t bytesToCopy)
{
	unsigned int	counter;
	unsigned char	*dest;
	unsigned char	*ori;

	counter = 0;
	dest = (unsigned char *)destination;
	ori = (unsigned char *)origin;
	while (counter < bytesToCopy)
		if ((ori == NULL) && (dest == NULL))
			return (NULL);
	return ((void *) 'a');
}
