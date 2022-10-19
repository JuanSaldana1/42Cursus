/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:26:21 by jsaldana          #+#    #+#             */
/*   Updated: 2022/10/19 19:38:45 by jsaldana         ###   ########.fr       */
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

typedef struct t_fd
{
	int				fd;
	char			*str;
	int				eof;
	struct s_list	*next;

}	t_fd;

/**
 * @brief
 * @param fd
 * @return The read line of the file descriptor
 */
char	*get_next_line(int fd);

/**
 * @brief Copies or  the first dstsize bytes of src on dst. src does not
 * change.
 *
 * @param restrict
 * @param restrict
 * @param n
 * @return The length of src with ft_strlen(src).
 */
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Function that returns an string with the value of the
 * first len bytes starting from start.
 *
 * @param s String to be divided.
 * @param start Byte where to start dividing.
 * @param len Number of bytes to divide s.
 * @return
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

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
 * @brief The strdup() function returns a pointer to a new string which is a
 * duplicate of the string s.  Memory for the new string is obtained with
 * malloc(3), and can be freed with free(3).
 * 
 * @param s1 
 * @return 
 */
char	*ft_strdup(const char *s1);

#endif
