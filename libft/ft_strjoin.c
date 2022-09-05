/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:14:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 16:47:27 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		count_s1;
	int		count_s2;
	int		count;

	if (s1 && s2)
	{
		count_s1 = (int) ft_strlen(s1);
		count_s2 = (int) ft_strlen(s2);
		dest = (char *) malloc((count_s1 + count_s2 + 1) * sizeof(char));
		if (dest == NULL)
			return (NULL);
		count = -1;
		while (s1[++count])
			dest[count] = s1[count];
		count = -1;
		while (s2[++count])
		{
			dest[count_s1] = s2[count];
			count_s1++;
		}
		dest[count_s1] = '\0';
		return (dest);
	}
	return (NULL);
}
