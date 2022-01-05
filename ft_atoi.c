/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:21:59 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/02 15:43:07 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			n;
	int			negative;
	const char	*src;
	int			i;

	i = 0;
	src = str;
	while ((src[i] >= 9 && src[i] <= 13) || (src[i] == ' '))
		i++;
	negative = 0;
	if (src[i] == '-' || src[i] == '+')
		if (src[i++] == '-')
			negative = 1 - negative;
	n = 0;
	while (src[i] >= '0' && src[i] <= '9')
		n = src[i++] - '0' + n * 10;
	if (negative)
		n *= -1;
	return (n);
}
