/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:15:48 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/03 18:19:45 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(char const *src, va_list args, int value)
{
	src++;
	if (*src == '%')
		value += ft_putchar('%');
	if (*src == 'c')
		value += ft_putchar(va_arg(args, int));
	if (*src == 's')
		value += ft_putstr(va_arg(args, char *));
	if (*src == 'd')
		value += ft_putnbr(va_arg(args, int));
	if (*src == 'i')
		value += ft_putnbr(va_arg(args, int));
	if (*src == 'u')
		value += ft_putnbr_u(va_arg(args, unsigned int));
	if (*src == 'p')
		value += ft_putstr("0x") + ft_putnbr_hex(va_arg(args, size_t), *src);
	if (*src == 'x')
		value += ft_putnbr_hex(va_arg(args, unsigned int), *src);
	if (*src == 'X')
		value += ft_putnbr_hex(va_arg(args, unsigned int), *src);
	return (value);
}
