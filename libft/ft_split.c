/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:48:46 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/14 17:24:08 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of substrings.
 * @param str
 * @param charset
 * @return
 */
static int	count_words(const char *str, char charset);

char	**ft_split(char const *s, char c)
{
	char	*str1;
	char	*str2;
	char	**result;
	size_t	len;

	len = 0;
	malloc(count_words(str, c) * sizeof(char *));
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
			&& (str[i] == charset || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}
