/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:43:10 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/13 12:03:17 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>
# include <fcntl.h>

/**
 * @brief Deprecated, use better memset(3).\n
 * This function erases or set to null or zero the first n bytes of the pointer
 * given.
 *
 * @param s pointer
 * @param n number of bytes to erase.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Checks that the passed char is alphanumeric
 * From a to Z and from 0 to 9.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);

/**
 * @brief Only checks that the passed parameter is an alphabetic char
 * That is between 65 & 90 and 97 & 122.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);

/**
 * @brief Checks that the passed value is an ascii character.
 * 
 * @param c 
 * @return int 
 */
int		ft_isascii(int c);

/**
 * @brief Returns 1 if the argument passed is a number.
 * @param c
 * @return
 */
int		ft_isdigit(int c);

/**
 * @brief If the passed argument can be printable
 * (from 32 to 127 on decimal ascii)
 *
 * @param c
 * @return 1 if is correct.\n
 * 0 if is false.
 */
int		ft_isprint(int c);

/**
 * @brief Locate the first position of c at/on n first
 * characters of s.
 * @param s
 * @param c
 * @param n
 * @return \n
 * If it founds the character, returns the first position or
 * pointer to found character's position.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The first array takes the value of the first n bytes of the second
 * array.
 * If the first array and the second are null, returns null.
 * 
 * Inside the function, I create a counter that works while is lower than the
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
void	*ft_memcpy(void *origin, void *destination, size_t bytesToCopy);

/**
 * @brief Substitutes the c character on the first n bytes of the str array.
 * Takes the str chain, you define what character you want to write, and
 * during how much positions will be substituted.
 * 
 * @param str 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memset(void *str, int c, size_t n);

/**
 * @brief Prints every char is passed.
 *
 * @param c
 * @param fd
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Sends the string s to thr given file descriptor,
 * followed by line break.
 * @param s
 * @param fd
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Prints the number
 *
 * @param n
 * @param fd
 */
void	ft_putnbr_fd(int n, int fd);

/**
 *
 * @param s
 * @param c
 * @return
 */
char	**ft_split(char const *s, char c);

/**
 * @brief
 * @param str
 * @param c
 * @return
 */
char	*ft_strchr(const void *str, int c);

/**
 * @brief Foreach character of string s, it is applied the 'f' function.
 * @param s
 * @param f
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 *
 * @param s1
 * @param s2
 * @return
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Removes the set characters of s1 string.\n
 * To do it, first, checks each character in other static function.
 *
 * @param s1
 * @param set
 * @return
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Concatenates destination & source.
 *
 * @param dst
 * @param src
 * @param destsize
 * @return
*/
size_t	ft_strlcat(char *dst, const char *src, size_t destsize);

/**
 * @brief Copies or  the first n bytes of src on dst. src does not change.
 *
 * @param restrict
 * @param restrict
 * @param n
 * @return Measures the length of src with ft_strlen(src).
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

/**
 * @brief Returns the length of the given array.
 *
 * @param str
 * @return
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Compares the n first bytes of the two passed strings.
 *
   If both arrays are same, it will return 0.\n
   If the first array is bigger than the second, it will return a
   positive number.\n
   If the first array is smaller than the second, it will return a
   negative number.\n
 *
 * It takes the length based on ascii code.
 *
 * @param str1
 * @param str2
 * @param n
 * @return int
 */
int		ft_strncmp(const char *str1, const char *str2, size_t n);

/**
 * @brief
 * @param haystack
 * @param needle
 * @param len
 * @return
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Searches for the last c character on s string
 *
 * @param s
 * @param c
 * @return
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Removes all characters from set string from the start and the end
 * of s1, finding a character not owning to set.
 *
 * @param s1
 * @param set
 * @return s1 cut
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief
 *
 * @param s
 * @param start
 * @param len
 * @return
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Converts to lowercase the char given.
 *
 * @param c
 * @return
 */
int		ft_tolower(int c);

/**
 * @brief Converts to uppercase the given char.
 * @param c
 * @return
 */
int		ft_toupper(int c);
#endif