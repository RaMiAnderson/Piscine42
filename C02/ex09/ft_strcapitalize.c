/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:16:18 by mramena           #+#    #+#             */
/*   Updated: 2025/01/20 23:35:44 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

void	ft_second_part(char *str, int i, int is_f)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && is_f == 1)
		{
			str[i] = str[i] - 32;
			is_f = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && is_f == 0)
			str[i] = str[i] + 32;
		else if (!((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			is_f = 1;
			str[i] = str[i];
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			str[i] = str[i];
			is_f = 0;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_f;

	i = 0;
	is_f = 1;
	ft_strlowcase(str);
	ft_second_part(str, i, is_f);
	return (str);
}
