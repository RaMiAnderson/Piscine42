/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:04:06 by mramena           #+#    #+#             */
/*   Updated: 2025/01/27 09:06:59 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argC, char *argV[])
{
	int	i;

	i = argC - 1;
	while (i > 0)
	{
		ft_putstr(argV[i]);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
