/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:39:20 by mramena           #+#    #+#             */
/*   Updated: 2025/01/28 00:22:29 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	find_len;
	int	i;
	int	j;
	int	k;

	find_len = ft_strlen(to_find);
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] != '\0' && to_find[j] != '\0' && str[k] == to_find[j])
			{
				k++;
				j++;
			}
			if (j != find_len)
				j = 0;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	if (j == find_len)
	{
		return (str + k - j);
	}
	return (NULL);
}
