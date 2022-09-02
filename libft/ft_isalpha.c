/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:55:46 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/02 10:52:39 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* int main(int argc, char const *argv[])
{
	char	chain[] = "123AbG";
	int		count;

	count = 0;
	while (chain[count])
	{
		printf("%d\n", ft_isalpha(chain[count]));
		count++;
	}
	return (0);
} */
