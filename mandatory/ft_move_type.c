/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:12:21 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/15 23:30:52 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_up(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem)
{
	while ((*a)->nbr != top->nbr && (*b)->nbr != bst_elem->nbr)
		ft_rr(a, b, 0);
	while ((*b)->nbr != bst_elem->nbr)
		ft_rb(b, 0);
	while ((*a)->nbr != top->nbr)
		ft_ra(a, 0);
}

void	two_down(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem)
{
	while ((*a)->nbr != top->nbr && (*b)->nbr != bst_elem->nbr)
		ft_rrr(a, b, 0);
	while ((*b)->nbr != bst_elem->nbr)
		ft_rrb(b, 0);
	while ((*a)->nbr != top->nbr)
		ft_rra(a, 0);
}

void	up_down(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem)
{
	while ((*a)->nbr != top->nbr)
		ft_ra(a, 0);
	while ((*b)->nbr != bst_elem->nbr)
		ft_rrb(b, 0);
}

void	down_up(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem)
{
	while ((*a)->nbr != top->nbr)
		ft_rra(a, 0);
	while ((*b)->nbr != bst_elem->nbr)
		ft_rb(b, 0);
}
