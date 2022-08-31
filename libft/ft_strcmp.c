/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:14:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/08/31 12:13:23 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (str1[count] == str2[count])
			return (0);
		count++;
	}
}

int	main(int argc, char const *argv[])
{
	printf("%i", ft_strcmp("asdfghjkl", "asd", 10));
	return (0);
}
