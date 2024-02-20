/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:23:47 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/06 03:20:28 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max_three(t_stack *stack)
{
	int	max;

	max = stack->nbr;
	while (stack)
	{
		if (stack->nbr > max)
			max = stack->nbr;
		stack = stack->next;
	}
	return (max);
}

void	ft_sort_three(t_stack **stack)
{
	int	max;

	max = ft_max_three(*stack);
	if ((*stack)->nbr == max)
		ft_ra(stack, 0);
	else if ((*stack)->next->nbr == max)
		ft_rra(stack, 0);
	if ((*stack)->nbr > (*stack)->next->nbr)
		ft_sa(stack, 0);
}
