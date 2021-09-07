/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:03:19 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 11:18:26 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 < s2)
	{
		i = 0;
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else if (s2 < s1)
	{
		i = len;
		while (i--)
			s1[i] = s2[i];
	}
	return (s1);
}
