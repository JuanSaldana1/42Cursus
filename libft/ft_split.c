/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:48:46 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/14 19:33:33 by jsaldana         ###   ########.fr       */
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
	char	*word;
	char	**result;
	int		words;
	int		i;
	int		j;

	words = 0;
	i = 0;
	j = 0;
	malloc(count_words(s, c) * sizeof(char *));
	while (words < count_words(s, c))
	{
		if ((s[i + 1] == c || s[i + 1] == '\0')
			&& !(s[i] == c || s[i] == '\0'))
		{
			s[i] = word[j];
			j = 0;
		}
		i++;
		j++;
		s[i] = word[j];
		result[words] = word;
	}
	result[len] = "\0";
	return (result);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0')
			&& !(str[i] == charset || str[i] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	main(void)
{
	char	*str = " Hola ole ahi que tal  ";

	printf("%i", count_words(str, ' '));
	return (0);
}
