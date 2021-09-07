/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:02:12 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/06 14:12:47 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '	')
		return (1);
	if (c == '\f' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (n * sign < LLONG_MIN / 10)
			return (0);
		if (n * sign > LLONG_MAX / 10)
			return (-1);
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(n * sign));
}
