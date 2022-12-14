/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:57:10 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/20 18:19:34 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Function that counts every digit of the number passed as
 * parameter.\n
 * This is made by dividing the number by ten to make it smaller.\n
 * You have to check if the number is negative; if that happens,
 * the function must add one more digit.
 *
 * @param n
 * @return
 */
int	count_digits(int n);

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digits;
	size_t		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	str = malloc(digits + 1);
	if (!str)
		return (0);
	str[digits] = '\0';
	count = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		count++;
	}
	while (digits-- > count)
	{
		str[digits] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (0 >= n)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
