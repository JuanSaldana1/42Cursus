/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:48:53 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/07 12:31:13 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# define LOWXBASE "0123456789abcdef"
# define UPPERXBASE "0123456789ABCDEF"

int				ft_atoi(const char *str);

int				ft_isdigit(int c);

/**
 * @brief Function that prints the passed params.\n
 * Every time it founds an %, counts one more argument
 * @param src
 * @param ...
 * @return
 */
int				ft_printf(char const *src, ...);

/**
 * @brief
 * @param c
 */
int				ft_putchar(char c);

/**
 * @brief
 * @param n
 * @param c
 * @return
 */
int				ft_putnbr_hex(size_t n, char const c);

/**
 * @brief
 * @param n
 * @return
 */
unsigned int	ft_putnbr_u(unsigned int n);

/**
 * @brief
 * @param n
 * @return
 */
int				ft_putnbr(int n);

/**
 * @brief
 * @param s
 */
int				ft_putstr(char *s);

/**
 * @brief
 * @param str
 * @return
 */
size_t			ft_strlen(char const *str);

#endif