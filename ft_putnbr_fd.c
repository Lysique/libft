/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:14:27 by tamighi           #+#    #+#             */
/*   Updated: 2021/09/04 08:51:39 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int				length;
	unsigned int	nb;
	char			neg;
	char			num;

	length = 1;
	neg = '-';
	if (n < 0)
	{
		nb = n * -1;
		write(fd, &neg, 1);
	}
	else
		nb = n;
	while (nb / length >= 10)
		length = length * 10;
	while (length != 0)
	{
		num = (nb / length) + '0';
		write(fd, &num, 1);
		nb = nb % length;
		length = length / 10;
	}
}
