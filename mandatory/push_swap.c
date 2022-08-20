/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:04:42 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/20 18:39:47 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(int ac, char **av, t_stack *stack_a, t_stack *stack_b)
{
	check_all(stack_a, ac, av);
	stack_b->len = 0;
	stack_a->rank = (int *)malloc(sizeof(int) * stack_a->len);
	rank_array(stack_a);
	convert_all_numbers(stack_a);
}

void	ft_free_all(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->len > 0)
	{
		while (i < stack->len)
		{
			free(stack->list[i]);
			i++;
		}
		free(stack->list);
		free(stack->tab);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	if (argc > 1)
	{
		init(argc, argv, stack_a, stack_b);
		check_sort(stack_a);
		if (stack_a->len <= 5)
			sort_numbers(stack_a, stack_b);
		else
			radix_sort(stack_a, stack_b);
		ft_free_all(stack_a);
		ft_free_all(stack_b);
	}
	return (0);
}
