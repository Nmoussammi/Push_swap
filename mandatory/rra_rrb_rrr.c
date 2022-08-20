/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:45:48 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/19 14:13:54 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack, char *str)
{
	int	i;
	int	tmp;

	i = stack->len - 1;
	tmp = stack->arr[stack->len - 1];
	while (i > 0)
	{
		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[0] = tmp;
	ft_putstr(str);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a, "rra");
	reverse_rotate(stack_b, "rrb");
	ft_putstr("rrr");
}

void	reverse_rotate_binary(t_stack *stack, char *str)
{
	int	i;
	int	*tmp;

	i = stack->len - 1;
	tmp = stack->rank_bin[stack->len - 1];
	while (i > 0)
	{
		stack->rank_bin[i] = stack->rank_bin[i - 1];
		i--;
	}
	stack->rank_bin[0] = tmp;
	ft_putstr(str);
}

void	rrr_binary(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate_binary(stack_a, "rra");
	reverse_rotate_binary(stack_b, "rrb");
	ft_putstr("rrr");
}
