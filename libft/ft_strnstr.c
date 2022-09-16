/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:56:52 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/14 20:40:24 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	match;

	count = 0;
	if (needle[count] == '\0')
		return ((char *)haystack);
	while (haystack[count] && count < len)
	{
		match = 0;
		while (*(needle + match)
			&& needle[match] == haystack[count + match]
			&& count + match < len)
			match++;
		if (!needle[match])
			return ((char *)haystack + count);
		count++;
	}
	return (NULL);
}
