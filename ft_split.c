/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:18:24 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/06 11:42:51 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_skip(char const *str, char c, int i)
{
	if (c == 0)
		return (i);
	while (str[i] == c)
		i++;
	return (i);
}

int	ft_nbstrs(char const *str, char c)
{
	int	i;
	int	nb;

	if (!str)
		return (-1);
	i = ft_skip(str, c, 0);
	nb = 0;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == c || str[i] == '\0')
		{
			nb++;
			i = ft_skip(str, c, i);
		}
	}
	return (nb);
}

char	**ft_alloc(char **tab, char const *str, char c)
{
	int	i;
	int	j;
	int	n;

	i = ft_skip(str, c, 0);
	j = 0;
	n = 0;
	while (str[i] != '\0')
	{
		i++;
		j++;
		if (str[i] == c)
		{
			i = ft_skip(str, c, i);
			tab[n++] = (char *)malloc(j + 1);
			j = 0;
		}
	}
	if (str[i - 1] != c && c != '\0' && i != 0)
		tab[n] = (char *)malloc(j + 1);
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc(sizeof(char *) * ft_nbstrs(s, c) + 1);
	if (!tab || !s)
		return (0);
	tab = ft_alloc(tab, s, c);
	i = ft_skip(s, c, 0);
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		tab[j][k++] = s[i++];
		if (s[i] == c || s[i] == '\0')
		{
			tab[j++][k] = '\0';
			i = ft_skip(s, c, i);
			k = 0;
		}
	}
	tab[j] = 0;
	return (tab);
}
