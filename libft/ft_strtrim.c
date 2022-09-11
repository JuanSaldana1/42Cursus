/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:10:32 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/11 14:22:58 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		count;
	int		i;
	size_t	end;

	end = ft_strlen(s1);
	count = 0;
	i = 0;
	result = "";
	if (s1[end -1] == set[0])
	{
		end--;
	}
	else
	{
		result[count] = s1[end -1];
		count ++;
	}
	while (s1[count] == set[0])
	{
		count ++;
	}

	while (s1[count] < s1[end])
		{
			result[i] = s1[count];
			i++;
			count++;
		}
	return (result);
}

int	main(void)
{
	printf("%s", ft_strtrim("_______holllaaaaa______", "_"));
	return (0);
}
