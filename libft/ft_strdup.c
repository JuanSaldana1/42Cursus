/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:20:48 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/19 12:15:01 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*str;
	size_t			source_size;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	source_size = ft_strlen(s);
	str = malloc((source_size + 1) * sizeof(char));
	if (!str)
		return (0);
	while (i < source_size)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
