/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:29:11 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/02 15:43:06 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = malloc(size * count);
	if (c == NULL)
		return (NULL);
	while (i < size * count)
		c[i++] = '\0';
	return ((void *)c);
}
