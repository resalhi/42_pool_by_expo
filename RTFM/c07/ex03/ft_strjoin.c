/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:29:37 by ressalhi          #+#    #+#             */
/*   Updated: 2021/10/12 16:04:49 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(int size, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

int	full_size(int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return ((i * (size - 1)) + ft_strlen(size, strs));
}

char	*ft_strcat(char *str, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			l = 0;
			while (sep[l])
				str[k++] = sep[l++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		k;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		return (str);
	}
	k = full_size(size, strs, sep);
	str = malloc(sizeof(char) * (k + 1));
	if (str == 0)
		return (0);
	return (ft_strcat(str, strs, size, sep));
}
