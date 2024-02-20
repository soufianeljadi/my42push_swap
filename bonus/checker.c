/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 03:56:54 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/18 22:52:30 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	if (ac > 1)
	{
		a = ft_init_a(ac, av);
		if (!a || ft_check_dup(a))
			(ft_free_stack(&a), ft_error());
		b = NULL;
		while (1)
		{
			line = get_next_line(0);
			if (!line)
			{
				free(line);
				break ;
			}
			check_move_type(&a, &b, line);
			free(line);
		}
		check_if_sorted(&a, &b);
	}
}
