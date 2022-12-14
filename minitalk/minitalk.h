/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:38:17 by                   #+#    #+#             */
/*   Updated: 2022/12/01 19:28:14 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdio.h>


int		ft_putnbr(int n);
int		ft_putchar(const char c);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	sig_handler(int signum, siginfo_t *info, void *context);
void	showbits(int pid, char n);

#endif