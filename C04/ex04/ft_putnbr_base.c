/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 06:21:27 by mramena           #+#    #+#             */
/*   Updated: 2025/02/03 13:00:39 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_base_correct(char *str)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(str);
	if (len <= 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if ((str[i] <= 32 || str[i] == 43 || str[i] == 45 || str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			length;
	long int	nb;

	length = ft_strlen(base);
	nb = nbr;
	if (is_base_correct(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= length)
		{
			ft_putnbr_base((nb / length), base);
			ft_putnbr_base((nb % length), base);
		}
		else
		{
			ft_putchar(base[nb]);
		}
	}
}
