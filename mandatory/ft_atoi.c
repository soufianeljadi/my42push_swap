/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:30:40 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/11 23:30:50 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sn;
	long	num;

	(1) && (i = 0, sn = 1, num = 0);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' && ft_isdigit(str[i + 1]))
		sn *= -1;
	if ((str[i] == '+' && ft_isdigit(str[i + 1]))
		|| (str[i] == '-' && ft_isdigit(str[i + 1])))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		if ((str[i] - 48) + (num * 10) * sn > 2147483647
			|| (str[i] - 48) + (num * 10) * sn < -2147483648)
			ft_error();
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	num *= sn;
	return (num);
}
