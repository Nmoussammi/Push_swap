/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:39:01 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/20 18:56:06 by nmoussam         ###   ########.fr       */
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

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	j;
	int	len;

	j = stack_a->max_size - 1;
	while (j >= 0)
	{	
		len = stack_a->len;
		while (len > 0)
		{
			if (stack_a->rank_bin[0][j] == 0)
			{
				
				push_binary(stack_b, stack_a, "pb");
			}
			else
			{
				
				rotate_binary(stack_a, "ra");
			}
			len--;
		}
		while (stack_b->len != 0)
			push_binary(stack_a, stack_b, "pa");
		j--;
	}
}
