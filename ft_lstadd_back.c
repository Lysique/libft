/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:11:36 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 11:03:27 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr;

	if (!new || !alst)
		return ;
	ptr = *alst;
	if (!ptr)
	{
		*alst = new;
		return ;
	}
	while ((ptr)->next)
		(ptr) = (ptr)->next;
	(ptr)->next = new;
}
