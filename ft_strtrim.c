/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:49:41 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/02 15:48:48 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	verif(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*newstr;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (verif(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		newstr = ft_strdup("");
		if (newstr == NULL)
			return (NULL);
		else
			return (newstr);
	}
	while (verif(s1[end - 1], set) == 0)
		end--;
	newstr = ft_substr(s1, start, end - start);
	return (newstr);
}
