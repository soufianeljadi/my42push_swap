/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:24:06 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/13 00:44:23 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_min_position(t_stack *s, int nbr, int size)
{
	int	count;

	count = 0;
	while (1)
	{
		if (s->nbr == nbr)
			break ;
		count++;
		s = s->next;
	}
	if (count > (size / 2))
		return (0);
	return (1);
}

void	final_sort(t_stack **a, t_stack *m_nbr, int pos)
{
	while (1)
	{
		if ((*a)->nbr == m_nbr->nbr)
			break ;
		if (pos == 0)
			ft_rra(a, 0);
		if (pos == 1)
			ft_ra(a, 0);
	}
}
