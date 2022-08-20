/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_4_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:09:02 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/20 17:59:04 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack_a)
{
	if (stack_a->arr[0] > stack_a->arr[1] && \
	stack_a->arr[1] < stack_a->arr[2] && stack_a->arr[0] < stack_a->arr[2])
		swap(stack_a, "sa");
	else if (stack_a->arr[0] > stack_a->arr[1] && \
	stack_a->arr[1] > stack_a->arr[2] && stack_a->arr[0] > stack_a->arr[2])
	{
		swap(stack_a, "sa");
		reverse_rotate(stack_a, "rra");
	}
	else if (stack_a->arr[0] > stack_a->arr[1] && \
	stack_a->arr[1] < stack_a->arr[2] && stack_a->arr[0] > stack_a->arr[2])
		rotate(stack_a, "ra");
	else if (stack_a->arr[0] < stack_a->arr[1] && \
	stack_a->arr[1] > stack_a->arr[2] && stack_a->arr[0] < stack_a->arr[2])
	{
		swap(stack_a, "sa");
		rotate(stack_a, "ra");
	}
	else if (stack_a->arr[0] < stack_a->arr[1] && \
	stack_a->arr[1] > stack_a->arr[2] && stack_a->arr[0] > stack_a->arr[2])
		reverse_rotate(stack_a, "rra");
	else
		return ;
}

void	pb_sort_three_pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a, "pb");
	sort_three(stack_a);
	push(stack_a, stack_b, "pa");
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->arr[0] == find_min(stack_a))
		pb_sort_three_pa(stack_a, stack_b);
	else if (stack_a->arr[1] == find_min(stack_a))
	{
		swap(stack_a, "sa");
		pb_sort_three_pa(stack_a, stack_b);
	}
	else if (stack_a->arr[2] == find_min(stack_a))
	{
		reverse_rotate(stack_a, "rra");
		reverse_rotate(stack_a, "rra");
		pb_sort_three_pa(stack_a, stack_b);
	}
	else if (stack_a->arr[3] == find_min(stack_a))
	{
		reverse_rotate(stack_a, "rra");
		pb_sort_three_pa(stack_a, stack_b);
	}
}

void	pb_sort_four_pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a, "pb");
	sort_four(stack_a, stack_b);
	push(stack_a, stack_b, "pa");
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->arr[0] == find_min(stack_a))
		pb_sort_four_pa(stack_a, stack_b);
	else if (stack_a->arr[1] == find_min(stack_a))
	{
		swap(stack_a, "sa");
		pb_sort_four_pa(stack_a, stack_b);
	}
	else if (stack_a->arr[2] == find_min(stack_a))
	{
		rotate(stack_a, "ra");
		rotate(stack_a, "ra");
		check_sort(stack_a);
		pb_sort_four_pa(stack_a, stack_b);
	}
	else if (stack_a->arr[3] == find_min(stack_a))
	{
		reverse_rotate(stack_a, "rra");
		reverse_rotate(stack_a, "rra");
		pb_sort_four_pa(stack_a, stack_b);
	}
	else if (stack_a->arr[4] == find_min(stack_a))
	{
		reverse_rotate(stack_a, "rra");
		pb_sort_four_pa(stack_a, stack_b);
	}			
}
