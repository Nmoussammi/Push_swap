/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:54:57 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/19 21:12:10 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# define BUFFER_SIZE 1024

typedef struct s_stack
{
	int		len;
	char	**list;
	char	*tab;
	int		*arr;
	int		*new_arr;
}				t_stack;

char	*ft_parsing(int ac, char **av);
int		ft_isdigit(int c);
void	ft_print_msg(char *msg);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
void	check_double_number(t_stack *stack);
void	check_arg(t_stack *stack);
int		check_sort(t_stack *stack);
int		len_stack(t_stack *stack);
void	check_all(t_stack *stack, int argc, char **argv);
void	swap(t_stack *stack_a);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack_a);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack_a);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *stack_a, t_stack *stack_b);
int		nbr_sign(char *str);
void	ft_putstr(char *msg);
int		ft_strcmp(char *s1, char *s2);
void	ft_free_all(t_stack *stack);
char	*get_next_line(int fd);
void	init(int ac, char **av, t_stack *stack_a, t_stack *stack_b);
char	*ft_substr(char *s, int start, int len);
int		check_new_line(char *string);
char	*ft_read(char *string, int fd);
char	*get_line(char *str);
char	*get_rest(char *str);
void	check_instruction(char *inst, t_stack *stack_a, t_stack *stack_b);

#endif
