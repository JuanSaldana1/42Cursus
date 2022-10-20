/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:26:21 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/20 12:06:42 by jsaldana         ###   ########.fr       */
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
# include <stdio.h>

char	*ft_read_line(int fd, char *line);
char	*ft_write_readed_line(char *line);
char	*ft_remove_writed_line(char *line);

/**
 * @brief
 * @param fd
 * @return The read line of the file descriptor
 */
char	*get_next_line(int fd);

/**
 * @brief Concatenates str1 & str2.
 *
 * @param str1 First String
 * @param str2 Second String
 * @return Returns string resulting from concatenation.
*/
char	*ft_strjoin(char *str1, char *str2);

/**
 * @brief Returns the length of the given string.
 *
 * @param s string passed as parameter
 * @return the size of the given string.
 */
size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c);

#endif
