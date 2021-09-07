/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:22:19 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/06 11:05:47 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_l;

	(void)del;
	if (!lst || !f)
		return (0);
	ptr = lst;
	new_l = 0;
	while (ptr)
	{
		ft_lstadd_back(&new_l, ft_lstnew(f(ptr->content)));
		ptr = ptr->next;
	}
	return (new_l);
}
