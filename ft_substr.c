/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:28:45 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 14:51:49 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;

	if (!s)
		return (0);
	if (ft_strlen(s) - start < 0)
	{
		if (len > ft_strlen(s) - start)
			new_s = (char *)malloc(ft_strlen(s) - start + 1);
		else
			new_s = (char *)malloc(len + 1);
	}
	else
		new_s = (char *)malloc(0);
	if (!new_s)
		return (new_s);
	i = 0;
	while (s[i + start] != '\0' && i < len && ft_strlen(s) > start)
	{
		new_s[i] = s[i + start];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
