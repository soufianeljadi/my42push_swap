/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:19:12 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/18 22:37:16 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_aleardy_sorted(t_stack *a)
{
	int		size;
	int		i;
	t_stack	*tmp;

	if (!a)
	{
		write(1, "KO\n", 3);
		exit(EXIT_FAILURE);
	}
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

void	check_move_type(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		ft_sa (a, 1);
	else if (!ft_strcmp(line, "sb\n"))
		ft_sb (b, 1);
	else if (!ft_strcmp(line, "ss\n"))
		ft_ss (a, b, 1);
	else if (!ft_strcmp(line, "pa\n"))
		ft_pa (a, b, 1);
	else if (!ft_strcmp(line, "pb\n"))
		ft_pb (a, b, 1);
	else if (!ft_strcmp(line, "ra\n"))
		ft_ra (a, 1);
	else if (!ft_strcmp(line, "rb\n"))
		ft_rb (b, 1);
	else if (!ft_strcmp(line, "rr\n"))
		ft_rr (a, b, 1);
	else if (!ft_strcmp(line, "rra\n"))
		ft_rra (a, 1);
	else if (!ft_strcmp(line, "rrb\n"))
		ft_rrb (b, 1);
	else if (!ft_strcmp(line, "rrr\n"))
		ft_rrr (a, b, 1);
	else
		ft_error();
}

static	bool	is_empt(t_stack	*stack)
{
	return (stack == NULL);
}

void	check_if_sorted(t_stack **a, t_stack **b)
{
	if (ft_aleardy_sorted(*a) && is_empt(*b))
	{
		write(1, "OK\n", 3);
		ft_free_stack(a);
	}
	else
	{
		write(1, "KO\n", 3);
		ft_free_stack(b);
		ft_free_stack(a);
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
