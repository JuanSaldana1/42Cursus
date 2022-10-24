/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:28:30 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/07 12:33:26 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_args(char const *src, va_list args, int value)
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

int	ft_printf(char const *src, ...)
{
	va_list	parameters;
	int		count;

	count = 0;
	va_start(parameters, src);
	while (*src)
	{
		if (*src != '%')
			count += ft_putchar(*src);
		else
		{
			count = ft_print_args(src, parameters, count);
			src++;
		}
		src++;
	}
	va_end(parameters);
	return (count);
}

/* int	main(void)
{
	char	*str = "Hola Mundo";

	printf("%i", ft_printf("%s\n", str));
	return (0);
} */
