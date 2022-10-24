/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:38:17 by                   #+#    #+#             */
/*   Updated: 2022/10/24 11:40:38 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "printf/ft_printf.h"
# include <signal.h>


// CLIENT
void	ft_send_bits(int pid, char i);

// SERVER
void	ft_handler(int signal);


int	ft_isdigit(int c);

int	ft_atoi(const char *str);

#endif