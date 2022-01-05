/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:46:01 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/03 17:36:26 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenstr(int n)
{
	size_t		len;
	long int	nbr;

	nbr = n;
	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static char	*gain(int n)
{
	return (malloc (sizeof(char) * (lenstr(n) + 1)));
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nbr;
	int			strlen;

	strlen = lenstr(n);
	nbr = n;
	str = gain(strlen);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	i = strlen - 1;
	if (nbr < 10 && str[0] != '-')
		str[1] = nbr + '0';
	while (i >= 0 && nbr != 0)
	{
		str[i--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[strlen] = '\0';
	return (str);
}
