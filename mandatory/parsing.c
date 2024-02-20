/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:16:42 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/12 04:55:00 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_av_spaces(char *s)
{
	int	i;
	int	space_nbr;

	i = 0;
	space_nbr = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
			space_nbr++;
		i++;
	}
	if (i == space_nbr)
		return (0);
	return (1);
}

int	ft_av_empty(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!av[i][0])
			return (0);
		if (!ft_av_spaces(av[i]))
			return (0);
		i++;
	}
	return (1);
}

t_stack	*ft_init_a(int ac, char **av)
{
	t_stack	*a;
	int		i;
	char	**str;
	char	*s;
	int		n;

	if (!ft_av_empty(av))
		ft_error();
	a = NULL;
	s = ft_strjoin(ac - 1, av + 1, " ");
	if (!s)
		ft_error();
	str = ft_split(s, ' ');
	if (!str)
		(free(s), ft_error());
	i = -1;
	while (str[++i])
	{
		n = ft_atoi(str[i]);
		ft_add_back(&a, ft_stack_new(n));
	}
	free(s);
	ft_free_tab(str);
	ft_index_stack(&a);
	return (a);
}
