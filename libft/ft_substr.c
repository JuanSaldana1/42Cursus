/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:56:24 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 12:41:39 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		count;

	count = 0;
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	str = (char *) malloc(len * sizeof (char) + 1);
	if (!str || !s)
		return (NULL);
	while (s[start + count] != '\0' && count < (int)len)
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
