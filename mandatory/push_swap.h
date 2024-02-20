/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 03:56:43 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/13 00:45:54 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				moves;
	struct s_stack	*next;
}	t_stack;

void	ft_sort_three(t_stack **stack);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);

void	ft_error(void);
t_stack	*ft_init_a(int ac, char **av);
int		ft_aleardy_sorted(t_stack *a);
void	ft_index_stack(t_stack **stack);
void	ft_divise_stack(t_stack **a, t_stack **b);

void	ft_rotate(t_stack	**stack);
void	ft_ra(t_stack	**a, int display);
void	ft_rb(t_stack	**b, int display);
void	ft_rr(t_stack **a, t_stack **b, int display);
void	ft_rrotate(t_stack	**stack);
void	ft_rra(t_stack **a, int display);
void	ft_rrb(t_stack **b, int display);
void	ft_rrr(t_stack **a, t_stack **b, int display);
void	ft_push(t_stack **src, t_stack **dst);
void	ft_pa(t_stack **a, t_stack **b, int display);
void	ft_pb(t_stack **a, t_stack **b, int display);
void	ft_sa(t_stack **a, int display);
void	ft_sb(t_stack **b, int display);
void	ft_ss(t_stack **a, t_stack **b, int display);

void	two_up(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem);
void	two_down(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem);
void	up_down(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem);
void	down_up(t_stack **a, t_stack **b, t_stack *top, t_stack *bst_elem);

size_t	ft_size(t_stack *s);
t_stack	*ft_stack_new(int content);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_check_dup(t_stack *a);
void	ft_free_stack(t_stack **lst);

int		move_type(int a, int b, int c, int d);
int		get_type(t_stack *a, t_stack *b, t_stack *top, t_stack *tmp);
void	push_b_to_a(t_stack **a, t_stack **b, t_stack *bst_elem);
void	ft_index_moves(t_stack *a, t_stack **b);
void	ft_big_sort(t_stack **a, t_stack **b, size_t size_a);

t_stack	*min_nbr(t_stack *stack);
t_stack	*max_nbr(t_stack *stack);
t_stack	*best_elem(t_stack *s);

int		best_move(int a, int b, int c, int d);
int		get_max(int a, int b);
int		get_move(t_stack *a, t_stack *b, t_stack *top, t_stack *tmp);
t_stack	*get_top(t_stack *a, t_stack *tmp);

void	final_sort(t_stack **a, t_stack *m_nbr, int pos);
int		check_min_position(t_stack *s, int nbr, int size);

int		ft_atoi(const char *str);
int		ft_strlen(char	*str);
char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_free_tab(char **tab);
char	**ft_split(char const *s, char c);

#endif