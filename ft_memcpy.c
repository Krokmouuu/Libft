/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:56:49 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/04 15:51:40 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*s1;
	char		*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	while (n > 0)
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	return (dest);
}
