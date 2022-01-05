/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:27:22 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/01 15:50:07 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*oui;

	if (!(lst || *lst || del))
		return ;
	while (lst && *lst)
	{
		oui = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = oui;
	}
}
