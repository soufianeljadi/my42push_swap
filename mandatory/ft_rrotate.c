/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:29:20 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/12 04:25:09 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(t_stack	**stack)
{
	t_stack	*tmp;
	t_stack	*node;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = ft_lstlast(*stack);
	node = *stack;
	while (node->next->next)
		node = node->next;
	node->next = NULL;
	if (*stack)
		tmp->next = *stack;
	*stack = tmp;
	ft_index_stack(stack);
}

void	ft_rra(t_stack **a, int display)
{
	ft_rrotate(a);
	if (display == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int display)
{
	ft_rrotate(b);
	if (display == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int display)
{
	ft_rrotate(a);
	ft_rrotate(b);
	if (display == 0)
		write(1, "rrr\n", 4);
}
