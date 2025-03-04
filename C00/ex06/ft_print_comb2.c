/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 00:03:12 by mramena           #+#    #+#             */
/*   Updated: 2025/01/16 04:17:56 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_part_two(int n)
{
	int	u;
	int	d;

	if (n <= 9)
	{
		n = n + '0';
		write(1, "0", 1);
		write(1, &n, 1);
	}
	else
	{
		u = (n % 10) + '0';
		d = (n / 10) + '0';
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_part_two(i);
			write(1, " ", 1);
			ft_part_two(j);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
