/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:27:10 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/05 19:07:19 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(size_t n, char const c)
{
	int	rtn;

	rtn = 0;
	if (c == 'x' || c == 'p')
	{
		if (n >= 16)
			rtn += ft_putnbr_hex(n / 16, c);
		rtn += ft_putchar(LOWXBASE[n % 16]);
		return (rtn);
	}
	if (c == 'X')
	{
		if (n >= 16)
			rtn += ft_putnbr_hex(n / 16, c);
		rtn += ft_putchar(UPPERXBASE[n % 16]);
		return (rtn);
	}
	return (0);
}
