/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:43:10 by jsaldana          #+#    #+#             */
/*   Updated: 2022/08/31 17:14:56 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <fcntl.h>

/**
 * @brief The first array takes the value of the first n bytes of the second
 * array.
 * If the first array and the second are null, returns null.
 * 
 * inside the function, I create a counter that works while is lower than the
 * passed bytes.
 * 
 * @note ¿Do I need an aux var?
 * @note ¿Can I change letters by numbers?
 * 
 * @param origin 
 * @param destination 
 * @param bytesToCopy 
 * @return void* 
 */
void	*ft_memcpy(const void *origin, void *destination, size_t bytesToCopy);

/**
 * @brief deprecated, use better @memset(3)
 * This function erases or set to zero the first n bytes of the pointer given.
 * 
 * @param s pointer
 * @param n number of bytes to erase.
 * 
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief compares the n first bytes of the two passed strings.
 * 
   If both arrays are same, it will return 0.
   If the first array is bigger than the second, it will return a
   positive number.
   If the first array is smaller than the second, it will return a
   negative number.
 * 
 * It takes the length based on ascii code.
 * 
 * @param str1 
 * @param str2 
 * @param n 
 * @return int 
 */
int		ft_strcmp(const char *str1, const char *str2, size_t n);
#endif