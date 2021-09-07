/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:53:24 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/06 13:13:55 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*ptr;

	ptr = lst;
	if (!f)
		return ;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
