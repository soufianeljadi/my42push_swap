/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 03:39:20 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/12 23:05:18 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_stack **a, int display)
{
	int	n;

	if (!*a || !((*a)->next))
		return ;
	n = (*a)->nbr;
	(*a)->nbr = (*a)->next->nbr;
	(*a)->next->nbr = n;
	if (display == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b, int display)
{
	int	n;

	if (!*b || !((*b)->next))
		return ;
	n = (*b)->nbr;
	(*b)->nbr = (*b)->next->nbr;
	(*b)->next->nbr = n;
	if (display == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, int display)
{
	ft_sa(a, 1);
	ft_sa(b, 1);
	if (display == 0)
		write(1, "ss\n", 3);
}
