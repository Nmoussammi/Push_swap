/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:11:03 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:11:06 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_numbers(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->len == 5)
		sort_five(stack_a, stack_b);
	else if (stack_a->len == 4)
		sort_four(stack_a, stack_b);
	else if (stack_a->len == 3)
		sort_three(stack_a);
	else if (stack_a->len == 2)
	{
		if (stack_a->arr[0] > stack_a->arr[1])
			swap(stack_a, "sa");
	}
}

void	radix_instruction(t_stack *stack_a, t_stack *stack_b, int j)
{
	if (stack_a->rank_bin[0][j] == 0)
	{
		push(stack_b, stack_a, "pb");
		push_binary(stack_b, stack_a);
	}
	else
	{
		rotate(stack_a, "ra");
		rotate_binary(stack_a);
	}
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	j;
	int	len;

	j = stack_a->max_size;
	while (--j >= 0)
	{	
		len = stack_a->len;
		while (len > 0)
		{
			radix_instruction(stack_a, stack_b, j);
			len--;
		}
		while (stack_b->len != 0)
		{
			push(stack_a, stack_b, "pa");
			push_binary(stack_a, stack_b);
		}
	}
}
