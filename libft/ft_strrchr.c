/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:16:38 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/06 10:58:32 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = (int)ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (unsigned char)c)
			return ((char *)&s[count]);
		count --;
	}
	return (0);
}
