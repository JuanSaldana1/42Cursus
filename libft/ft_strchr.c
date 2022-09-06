/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:28:47 by jsaldana          #+#    #+#             */
/*   Updated: 2022/08/31 11:08:30 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const void *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
