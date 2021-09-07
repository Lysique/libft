/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 08:30:18 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 14:47:13 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checkset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_lengthx(const char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (0);
	i = 0;
	k = 0;
	j = ft_lengthx(s1) - 1;
	while (ft_checkset(s1[i], set) == 1 && s1[i] != '\0')
		i++;
	while (ft_checkset(s1[j], set) == 1 && j != 0)
		j--;
	if (j > 0)
		str = (char *)malloc(j - i + 2);
	else
		str = (char *)malloc(0);
	if (!str)
		return (0);
	while (i <= j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
