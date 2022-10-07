/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:20:43 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/03 18:22:45 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int n)
{
	int		rtn;

	rtn = 0;
	if (n > 9)
		rtn += ft_putnbr_u(n / 10);
	rtn += ft_putchar((char)((n % 10) + '0'));
	return (rtn);
}
