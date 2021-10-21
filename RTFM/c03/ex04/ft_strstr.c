/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:33:44 by ressalhi          #+#    #+#             */
/*   Updated: 2021/09/30 14:56:31 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i] == str[i])
		{
			if (to_find[i + 1] == '\0')
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}
