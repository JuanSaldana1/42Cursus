/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:29:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/03 16:35:47 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *origin, const void *destination, size_t bytesToCopy)
{
	size_t	i;

	if (!origin && !destination)
		return (0);
	i = 0;
	while (i < bytesToCopy)
	{
		((unsigned char *)origin)[i] = ((unsigned char *)destination)[i];
		i++;
	}
	return (origin);
}
