/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:02:50 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/10 22:27:42 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	(*src) = (*src)->next;
	tmp->next = *dst;
	(*dst) = tmp;
	tmp = NULL;
	ft_index_stack(dst);
	ft_index_stack(src);
}

void	ft_pb(t_stack **a, t_stack **b, int display)
{
	ft_push(a, b);
	if (display == 0)
		write(1, "pb\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b, int display)
{
	ft_push(b, a);
	if (display == 0)
		write(1, "pa\n", 3);
}
