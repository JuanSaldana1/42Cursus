/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:01:50 by jsaldana          #+#    #+#             */
/*   Updated: 2022/08/31 18:54:15 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (0);
	else
		return (1);
}

/* int	main(int argc, char const *argv[])
{
	char	chain[] = ";0ñs~*J~½¬{[]} ~\20····0~& ト た ぎ";
	int		count;

	count = 0;
	while (chain[count])
	{
		printf("%d\n", ft_isascii(chain[count]));
		count++;
	}
	return (0);
} */
