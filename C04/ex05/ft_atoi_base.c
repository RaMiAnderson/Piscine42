/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:31:22 by mramena           #+#    #+#             */
/*   Updated: 2025/01/30 11:11:10 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

void	get_whitespace_sign(char *str, int *i, int *sign)
{
	*i = 0;
	while (str[*i] != '\0'
		&& ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32))
		*i = *i + 1;
	*sign = 1;
	while (str[*i] != '\0' && (str[*i] == '-' || str[*i] == '+'))
	{
		if (str[*i] == '-')
			*sign = *sign * (-1);
		*i = *i + 1;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	total;
	int	len_base;

	if (is_base_correct(base) == 1)
	{
		get_whitespace_sign(str, &i, &sign);
		len_base = ft_strlen(base);
		total = 0;
		while (str[i] != '\0' )
		{
			j = 0;
			while (base[j] != '\0' && str[i] != base[j])
				j++;
			if (j == len_base)
				return (0);
			total = (total * len_base) + j;
			i++;
		}
		return (total * sign);
	}
	else
		return (0);
}
