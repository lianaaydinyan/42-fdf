/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaydiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:27:13 by liaydiny          #+#    #+#             */
/*   Updated: 2023/02/07 20:28:18 by liaydiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	res;

	res = 0;
	m = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	if ((str[i] == '+' || str[i] == '-' )
		&& (str[i + 1] <= '9' || str[i + 1] >= '0'))
	{
		if (str[i] == '-')
		{
			m = -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
			res = res * 10 + (str[i++] - '0');
	return (m * (res));
}
