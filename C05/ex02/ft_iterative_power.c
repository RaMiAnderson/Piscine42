/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:00:39 by mramena           #+#    #+#             */
/*   Updated: 2025/01/22 23:09:48 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	powered;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	powered = 1;
	while (i <= power)
	{
		powered = powered * nb;
		i++;
	}
	return (powered);
}
