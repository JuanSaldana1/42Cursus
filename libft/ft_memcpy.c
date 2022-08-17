/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:29:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/08/17 19:29:01 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *origin, void *destination, size_t bytesToCopy)
{
	unsigned int	counter;
	unsigned char	*dest;

	counter = 0;
	if (origin == NULL && destination == NULL)
		return (NULL);
}