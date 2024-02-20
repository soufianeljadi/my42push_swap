/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:58:17 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/18 20:25:42 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_type(int a, int b, int c, int d)
{
	if (a <= b && a <= c && a <= d)
		return (1);
	if (b <= a && b <= c && b <= d)
		return (2);
	if (c <= a && c <= b && c <= d)
		return (3);
	if (d <= a && d <= b && d <= c)
		return (4);
	return (0);
}

int	get_type(t_stack *a, t_stack *b, t_stack *top, t_stack *tmp)
{
	int	two_up;
	int	two_down;
	int	up_down;
	int	down_up;

	two_up = get_max(top->index, tmp->index);
	two_down = get_max((ft_size(a) - top->index), (ft_size(b) - tmp->index));
	up_down = top->index + (ft_size(b) - tmp->index);
	down_up = tmp->index + (ft_size(a) - top->index);
	return (move_type(two_up, two_down, up_down, down_up));
}

void	push_b_to_a(t_stack **a, t_stack **b, t_stack *bst_elem)
{
	t_stack	*top;

	top = get_top(*a, bst_elem);
	if (get_type(*a, *b, top, bst_elem) == 1)
		two_up(a, b, top, bst_elem);
	else if (get_type(*a, *b, top, bst_elem) == 2)
		two_down(a, b, top, bst_elem);
	else if (get_type(*a, *b, top, bst_elem) == 3)
		up_down(a, b, top, bst_elem);
	else if (get_type(*a, *b, top, bst_elem) == 4)
		down_up(a, b, top, bst_elem);
	ft_pa(a, b, 0);
}

void	ft_index_moves(t_stack *a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*top;

	tmp = *b;
	while (tmp)
	{
		top = get_top(a, tmp);
		tmp->moves = get_move(a, *b, top, tmp) + 1;
		tmp = tmp->next;
	}
}

void	ft_big_sort(t_stack **a, t_stack **b, size_t size_a)
{
	size_t	size_b;
	t_stack	*m_nbr;

	size_b = ft_size(*b);
	while (size_b--)
	{
		ft_index_moves(*a, b);
		push_b_to_a(a, b, best_elem(*b));
	}
	m_nbr = min_nbr(*a);
	final_sort(a, m_nbr, check_min_position(*a, m_nbr->nbr, size_a));
}
