/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:28:30 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/05 19:04:05 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
