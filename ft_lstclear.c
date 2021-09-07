/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:49:38 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 09:25:17 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	if (!del || !lst)
		return ;
	while (ptr)
	{
		*lst = (*lst)->next;
		ft_lstdelone(ptr, del);
		ptr = *lst;
	}
}
