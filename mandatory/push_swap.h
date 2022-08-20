/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:04:38 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/20 18:03:39 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_stack
{
	int		len;
	char	**list;
	char	*tab;
	int		*arr;
	int		*new_arr;
	int		*rank;
	int		**rank_bin;
	int		**new_rank_bin;
	int		max_size;
}				t_stack;

char	*ft_parsing(int ac, char **av);
int		ft_isdigit(int c);
void	ft_print_msg(char *msg);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strdup(char *s1);
int		*ft_strdup_int(t_stack *stack);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
void	check_double_number(t_stack *stack);
void	check_arg(t_stack *stack);
void	check_sort(t_stack *stack);
int		len_stack(t_stack *stack);
void	check_all(t_stack *stack, int argc, char **argv);
void	swap(t_stack *stack_a, char *str);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack_a, char *str);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack_a, char *str);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *stack_a, t_stack *stack_b, char *str);
void	sort_three(t_stack *stack);
void	sort_four(t_stack *stack_a, t_stack *stack_b);
void	pb_sort_three_pa(t_stack *stack_a, t_stack *stack_b);
void	pb_sort_four_pa(t_stack *stack_a, t_stack *stack_b);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
int		find_min(t_stack *stack);
int		find_max(t_stack *stack);
int		*sort_array(t_stack *stack);
int		*rank_array(t_stack *stack);
int		nb_binary(int nb);
int		*convert_one_number(t_stack *stack, int num);
int		**convert_all_numbers(t_stack *stack);
int		*reverse_array(t_stack *stack, int *tab);
int		nbr_sign(char *str);	
void	radix_sort(t_stack *stack_a, t_stack *stack_b);
void	rotate_binary(t_stack *stack_a, char *str);
void	rr_binary(t_stack *stack_a, t_stack *stack_b);
void	push_binary(t_stack *stack_a, t_stack *stack_b, char *str);
void	ft_putstr(char *msg);
int		ft_strcmp(char *s1, char *s2);
void	init(int ac, char **av, t_stack *stack_a, t_stack *stack_b);
void	ft_free_all(t_stack *stack);
void	sort_numbers(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate_binary(t_stack *stack, char *str);
void	rrr_binary(t_stack *stack_a, t_stack *stack_b);

#endif
