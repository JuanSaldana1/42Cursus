/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:10:32 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/08 12:18:00 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	size_t	end;

	end = ft_strlen(s1);
	result = "";
	while (s1[end -1] == set[0])
	{
		end--;
		return ("Hola");
	}
	return (result);
}
