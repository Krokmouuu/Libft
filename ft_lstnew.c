/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:09:03 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/01 15:33:25 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*oui;

	oui = malloc(sizeof(t_list));
	if (!oui)
		return (NULL);
	oui->content = content;
	oui->next = NULL;
	return (oui);
}
