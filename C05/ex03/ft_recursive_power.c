/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:11:51 by mramena           #+#    #+#             */
/*   Updated: 2025/01/22 23:19:30 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
