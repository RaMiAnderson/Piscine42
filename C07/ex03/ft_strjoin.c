/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:39:16 by mramena           #+#    #+#             */
/*   Updated: 2025/01/27 15:25:00 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	l_dest;
	int	i;

	l_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (dest);
}

int	ft_get_full_len(char **strs, int size, char *sep)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (i < size)
	{
		cpt += ft_strlen(strs[i]);
		if ((i + 1) < size)
			cpt += ft_strlen(sep);
		i++;
	}
	return (cpt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		max_len;

	if (size == 0)
		return (malloc(sizeof(char)));
	i = 0;
	max_len = ft_get_full_len(strs, size, sep);
	str = malloc(max_len * sizeof(char));
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ((i + 1) < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
