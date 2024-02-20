/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:00:28 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/10 20:37:47 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*min_nbr(t_stack *stack)
{
	t_stack	*tmp;
	int		min;

	tmp = stack;
	min = stack->nbr;
	while (stack)
	{
		if (stack->nbr < min)
			min = stack->nbr;
		stack = stack->next;
	}
	while (tmp)
	{
		if (tmp->nbr == min)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack	*max_nbr(t_stack *stack)
{
	t_stack	*tmp;
	int		max;

	tmp = stack;
	max = stack->nbr;
	while (stack)
	{
		if (stack->nbr > max)
			max = stack->nbr;
		stack = stack->next;
	}
	while (tmp)
	{
		if (tmp->nbr == max)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack	*best_elem(t_stack *s)
{
	t_stack	*tmp;
	int		min;

	min = s->moves;
	tmp = s;
	while (s)
	{
		if (s->moves < min)
			min = s->moves;
		s = s->next;
	}
	s = tmp;
	while (s)
	{
		if (s->moves == min)
			return (s);
		s = s->next;
	}
	return (NULL);
}
