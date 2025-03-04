/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:33:22 by mramena           #+#    #+#             */
/*   Updated: 2025/01/16 09:55:28 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_find_final_index(int *tab, int *index, int *j)
{
	if (tab[*index] > tab[*j])
	{
		*index = *j;
	}
	*j = *j + 1;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	index;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		index = i;
		while (j < size)
		{
			ft_find_final_index(tab, &index, &j);
		}
		if (index != i)
		{
			tmp = tab[i];
			tab[i] = tab[index];
			tab[index] = tmp;
		}
		i++;
	}
}
