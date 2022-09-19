/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:57:10 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/19 14:01:50 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Function that counts every digit of the number passed as
 * parameter.\n
 * This is made by dividing the number by ten to make it smaller
 * @param n
 * @return
 */
int	count_digits(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = count_digits(n);
	str = malloc(sizeof(char) * count_digits(n) + 1);
	str[digits + 1] = 0;
	while (digits--)
	{
		str[digits] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}

int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	main(void)
{
	printf("%s", ft_itoa(6));
	return (0);
}
