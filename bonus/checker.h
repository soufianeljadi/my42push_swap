/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 03:56:43 by sel-jadi          #+#    #+#             */
/*   Updated: 2024/02/15 22:11:21 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_init_a(int ac, char **av);

int		ft_aleardy_sorted(t_stack *a);
void	check_move_type(t_stack **a, t_stack **b, char *line);
void	check_if_sorted(t_stack **a, t_stack **b);
size_t	ft_size(t_stack *s);

int		ft_atoi(const char *str);

void	ft_error(void);

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

size_t	ft_size(t_stack *s);
t_stack	*ft_stack_new(int content);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_check_dup(t_stack *a);
void	ft_free_stack(t_stack **lst);

int		ft_strcmp(char *s1, char *s2);

int		ft_atoi(const char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_free_tab(char **tab);
char	**ft_split(char const *s, char c);

char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_search(char *s, int c);
char	*ft_strjoin_gnl(char *start, char *buff);
char	*ft_strdup(char *str);

#endif