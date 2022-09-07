/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:14:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/07 16:55:14 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	count;

	count = 0;
	while (count < (n - 1) && ft_strlen(str1) != 0 && ft_strlen(str2) != 0)
	{
		if (str1[count] != str2[count])
		{
			if (str1[count] > str2[count])
				return ((str1[count]) - str2[count]);
			else if (str2[count] > str1[count])
				return ((str2[count]) - str1[count]);
		}
		count++;
	}
	return (0);
}
