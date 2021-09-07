/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:31:06 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/06 11:31:23 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	p;

	if (n == 0)
		return (0);
	i = 0;
	b = (unsigned char *)s;
	p = (unsigned char)c;
	while (i < n)
	{
		if (b[i] == p)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
