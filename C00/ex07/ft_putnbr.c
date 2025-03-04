/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 00:24:20 by mramena           #+#    #+#             */
/*   Updated: 2025/01/16 01:33:48 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int *number, int length, int test)
{
	int	c;

	if (test == 1)
	{
		write(1, "-", 1);
	}
	while (length > 0)
	{
		c = number[length - 1] + '0';
		write(1, &c, 1);
		length--;
	}
}

void	ft_putnbr(int nb)
{
	int	number[10];
	int	length;
	int	test;

	test = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			test = 1;
			nb = nb * (-1);
		}
		length = 0;
		while (nb > 0)
		{
			number[length] = nb % 10;
			nb = nb / 10;
			length++;
		}
		ft_write_number(number, length, test);
	}
}
