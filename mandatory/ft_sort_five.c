/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:53:14 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/12 04:25:31 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	ft_pb(stack_a, stack_b, 0);
	ft_pb(stack_a, stack_b, 0);
	ft_sort_three(stack_a);
	ft_big_sort(stack_a, stack_b, 5);
}
