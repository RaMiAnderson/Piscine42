/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:11:44 by mramena           #+#    #+#             */
/*   Updated: 2025/01/27 09:30:39 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

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

void	ft_print_arg(int argC, char *argV[])
{
	int	i;

	i = 1;
	while (i < argC)
	{
		ft_putstr(argV[i]);
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argC, char *argV[])
{
	char	*tmp;
	int		i;
	int		j;

	i = 1;
	while (i < argC)
	{
		j = i + 1;
		while (j < argC)
		{
			if (ft_strcmp(argV[i], argV[j]) > 0)
			{
				tmp = argV[i];
				argV[i] = argV[j];
				argV[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_print_arg(argC, argV);
	return (0);
}
