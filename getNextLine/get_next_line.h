/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:00:00 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/17 10:38:36 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

/**
 * @brief
 * @param fd
 * @return The read line of the file descriptor
 */
char	*get_next_line(int fd);

/**
 * @brief
 * @param buf
 * @return
 */
int		ft_buf_0_after_nl(char *buf);

/**
 * @brief
 * @param fd
 * @param buf
 * @param index
 * @return
 */
char	*ft_alloc_read(int fd, char *buf, int index);

#endif
