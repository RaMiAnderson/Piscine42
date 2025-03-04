/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:54:34 by mramena           #+#    #+#             */
/*   Updated: 2025/02/06 15:33:12 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		len_src;
	int		i;

	len_src = ft_strlen(src);
	new_str = malloc(len_src + 1 * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len_src)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

void	ft_show_tab(struct s_stock_str *par);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*t_tab;

	i = 0;
	t_tab = malloc((ac + 1 ) * sizeof(t_stock_str));
	if (t_tab == NULL)
		return (NULL);
	while (i < ac)
	{
		t_tab[i].size = ft_strlen(av[i]);
		t_tab[i].str = ft_strdup(av[i]);
		t_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (t_tab);
}
