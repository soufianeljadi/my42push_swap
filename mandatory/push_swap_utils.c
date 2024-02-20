/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:19:12 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/12 04:35:50 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_aleardy_sorted(t_stack *a)
{
	int		size;
	int		i;
	t_stack	*tmp;

	if (!a)
		ft_error();
	tmp = a->next;
	size = ft_size(a);
	i = 0;
	while (a && tmp)
	{
		if (a->nbr > tmp->nbr)
			break ;
		i++;
		tmp = tmp->next;
		a = a->next;
	}
	if (size == (i + 1))
		return (1);
	return (0);
}

void	ft_divise_stack(t_stack **a, t_stack **b)
{
	int		i;
	size_t	s;

	i = 0;
	s = ft_size(*a);
	while (s--)
	{
		ft_pb(a, b, 0);
	}
	i = 0;
	while (i < 2)
	{
		ft_pa(a, b, 0);
		i++;
	}
}

size_t	ft_size(t_stack *s)
{
	size_t	size;

	if (!s)
		ft_error();
	size = 0;
	while (s)
	{
		size++;
		s = s->next;
	}
	return (size);
}
