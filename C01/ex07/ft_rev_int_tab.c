/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 07:53:27 by mramena           #+#    #+#             */
/*   Updated: 2025/01/16 08:13:28 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
