/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:14:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/08 12:04:08 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int				count;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	count = 0;
	while ((str1[count] != '\0' || str2[count] != '\0') && count < (int)n)
	{
		if (s1[count] != s2[count])
		{
			if (s1[count] > s2[count])
				return (s1[count] - s2[count]);
			else if (s2[count] > s1[count])
				return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}
/*
int main (void)
{
	printf("%d\n", ft_strncmp("test", "testss", 7));
}
*/
