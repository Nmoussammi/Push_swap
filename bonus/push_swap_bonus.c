/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:14:37 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/19 21:23:36 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	init(int ac, char **av, t_stack *stack_a, t_stack *stack_b)
{
	check_all(stack_a, ac, av);
	stack_b->len = 0;
}

void	check_instruction(char *inst, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strcmp(inst, "sa\n") == 0)
		swap(stack_a);
	else if (ft_strcmp(inst, "sb\n") == 0)
		swap(stack_b);
	else if (ft_strcmp(inst, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(inst, "pa\n") == 0)
		push(stack_a, stack_b);
	else if (ft_strcmp(inst, "pb\n") == 0)
		push(stack_b, stack_a);
	else if (ft_strcmp(inst, "ra\n") == 0)
		rotate(stack_a);
	else if (ft_strcmp(inst, "rb\n") == 0)
		rotate(stack_b);
	else if (ft_strcmp(inst, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(inst, "rra\n") == 0)
		reverse_rotate(stack_a);
	else if (ft_strcmp(inst, "rrb\n") == 0)
		reverse_rotate(stack_b);
	else if (ft_strcmp(inst, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else
		ft_print_msg("error\n");
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*inst;

	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	if (argc > 1)
	{
		init(argc, argv, stack_a, stack_b);
		check_sort(stack_a);
		inst = get_next_line(0);
		while (inst)
		{
			check_instruction(inst, stack_a, stack_b);
			inst = get_next_line(0);
		}	
		if (check_sort(stack_a) == 0)
			ft_print_msg("KO");
	}
}
