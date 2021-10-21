/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:02:34 by ressalhi          #+#    #+#             */
/*   Updated: 2021/10/01 20:30:12 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowercase(str);
	while (str[i])
	{
		while (!((str[i] <= 'z' && str[i] >= 'a')
				|| (str[i] <= '9' && str[i] >= '0')))
		{
			i++;
		}
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
			i++;
		}
		while ((str[i] <= 'z' && str[i] >= 'a')
			|| (str[i] <= '9' && str[i] >= '0'))
		{
			i++;
		}
	}
	return (str);
}
