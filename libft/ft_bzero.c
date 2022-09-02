/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:46:40 by jsaldana          #+#    #+#             */
/*   Updated: 2022/08/31 19:05:19 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((char *)s)[count] = 0;
		count++;
	}
}

/* int	main(int argc, char const *argv[])
{
	unsigned char	str[50];

	printf("%s", str);
	ft_bzero(str, 2);
	printf("%s", str);
	return (0);
} */
