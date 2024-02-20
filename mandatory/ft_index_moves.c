/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:03:05 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/18 20:26:04 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	best_move(int a, int b, int c, int d)
{
	if (a <= b && a <= c && a <= d)
		return (a);
	if (b <= a && b <= c && b <= d)
		return (b);
	if (c <= a && c <= b && c <= d)
		return (c);
	if (d <= a && d <= b && d <= c)
		return (d);
	return (0);
}

int	get_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	get_move(t_stack *a, t_stack *b, t_stack *top, t_stack *tmp)
{
	int	two_up;
	int	two_down;
	int	up_down;
	int	down_up;

	two_up = get_max(top->index, tmp->index);
	two_down = get_max((ft_size(a) - top->index), (ft_size(b) - tmp->index));
	up_down = top->index + (ft_size(b) - tmp->index);
	down_up = tmp->index + (ft_size(a) - top->index);
	return (best_move(two_up, two_down, up_down, down_up));
}

t_stack	*get_top(t_stack *a, t_stack *tmp)
{
	int		i;

	i = 0;
	if (tmp->nbr < min_nbr(a)->nbr || tmp->nbr > max_nbr(a)->nbr)
		return (min_nbr(a));
	if (a->nbr > tmp->nbr && ft_lstlast(a)->nbr < tmp->nbr)
		return (a);
	while (a && a->next)
	{
		if (a->nbr < tmp->nbr && a->next->nbr > tmp->nbr)
			return (a->next);
		a = a->next;
	}
	return (NULL);
}
