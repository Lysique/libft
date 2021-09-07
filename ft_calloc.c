/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:02:57 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/03 11:05:40 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)malloc(size * count);
	if (!mem)
		return (0);
	ft_bzero((void *)mem, size * count);
	return ((void *)mem);
}
