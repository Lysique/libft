/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:46:51 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 14:12:50 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_times(int n, unsigned int *length)
{
	unsigned int	nbr;
	int				times;

	times = 0;
	if (n < 0)
	{
		nbr = n * -1;
		times++;
	}
	else
		nbr = n;
	while (nbr / *length >= 10)
	{
		*length = *length * 10;
		times++;
	}
	return (times + 2);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	length;
	char			*nb;
	unsigned int	nbr;

	i = 0;
	length = 1;
	nb = (char *)malloc(ft_times(n, &length));
	if (!nb)
		return (0);
	if (n < 0)
	{
		nb[i++] = '-';
		nbr = n * -1;
	}
	else
		nbr = n;
	while (length != 0)
	{
		nb[i++] = (nbr / length) + '0';
		nbr = nbr % length;
		length = length / 10;
	}
	nb[i] = '\0';
	return (nb);
}
