/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 03:56:54 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/18 22:24:55 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b, size_t size_a)
{
	if (size_a == 2)
		ft_sa(a, 0);
	else if (size_a == 3)
		ft_sort_three(a);
	else if (size_a == 5)
		ft_sort_five(a, b);
	else if (size_a >= 4 && size_a != 5)
	{
		ft_divise_stack(a, b);
		ft_big_sort(a, b, size_a);
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	size_t	size_a;

	if (ac > 1)
	{
		a = ft_init_a(ac, av);
		if (!a || ft_check_dup(a))
		{
			ft_free_stack(&a);
			ft_error();
		}
		size_a = ft_size(a);
		b = NULL;
		if (!ft_aleardy_sorted(a))
		{
			ft_sort(&a, &b, size_a);
		}
		ft_free_stack(&b);
		ft_free_stack(&a);
	}
}
