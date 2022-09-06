/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:14:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/06 11:15:39 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	count;
	int				result;

	count = 0;
	while (count < (n - 1))
	{
		if (ft_strlen(str1) == ft_strlen(str2))
			result = (0);
		else if (ft_strlen(str1) > ft_strlen(str2))
			result = ((int)(ft_strlen(str1) - ft_strlen(str2)));
		else if (ft_strlen(str2) > ft_strlen(str1))
			result = ((int)(ft_strlen(str2) - ft_strlen(str1)));
		count++;
	}
	return (result);
}
