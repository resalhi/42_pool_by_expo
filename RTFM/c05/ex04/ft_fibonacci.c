/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:00:23 by ressalhi          #+#    #+#             */
/*   Updated: 2021/10/05 12:40:52 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (i);
}
