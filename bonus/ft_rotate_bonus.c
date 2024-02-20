/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:15:04 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/12 23:05:08 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rotate(t_stack	**stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = ft_lstlast(*stack);
	(*stack)->next = tmp;
	*stack = tmp->next;
	tmp->next = NULL;
}

void	ft_ra(t_stack	**a, int display)
{
	ft_rotate(a);
	if (display == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack	**b, int display)
{
	ft_rotate(b);
	if (display == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int display)
{
	ft_rotate(a);
	ft_rotate(b);
	if (display == 0)
		write(1, "rr\n", 3);
}
