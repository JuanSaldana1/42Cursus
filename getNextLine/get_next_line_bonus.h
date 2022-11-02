/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:26:21 by jsaldana          #+#    #+#             */
/*   Updated: 2022/11/02 13:15:18 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

/**
 * @brief Creates a buffer, that will save the memory size
 * necessary for each character
 * 
 * @param fd File descriptor.
 * @param line String passed.
 */
char	*ft_read_line(int fd, char *line);

/**
* Returns the line 
*/
char	*ft_write_readed_line(char *document);

/**
Se quita la línea
*/
char	*ft_remove_writed_line(char *line);

/**
 * @brief We create two variables, the line to read,
 * that is a static char because it is reset for every line readed.
 * The other variable is a string that is the value of the line.
 * To this line, we apply the function ft_remove_writted_line, that
 * is the line allocated on the buffer.

 I read the whole document, I detect a line, I print it and finally I delete it.
 I return 
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

/**
 * @brief If String s does not exists, returns 0.\n
 * Then, Sets the length of the final string by using ft_strlen(s)\n
 * And, finally, while the string size is bigger than zero,
 * returns every char from string.
 * 
 * @param s const char
 * @param c int that 
 * @return char* The String resulting until the character passed
 */
char	*ft_strchr(const char *s, int c);

#endif
