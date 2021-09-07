/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:39:38 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 14:47:43 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_lengths(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	c = (char *)malloc(ft_lengths(s1) + ft_lengths(s2));
	if (!c)
		return (0);
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return (c);
}
