/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:56:24 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 12:07:41 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		count;

	count = 0;
	str = "";
	while (s[start++] != '\0' && len > 0)
	{
		str[count] = s[start];
		count++;
		len--;
	}
	return (str);
}
