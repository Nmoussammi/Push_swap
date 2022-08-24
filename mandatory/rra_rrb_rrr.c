/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:11:19 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:11:22 by nmoussam         ###   ########.fr       */
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
	if (str != NULL)
		ft_putstr(str);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a, NULL);
	reverse_rotate(stack_b, NULL);
	ft_putstr("rrr");
}

void	reverse_rotate_binary(t_stack *stack)
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
}

void	rrr_binary(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate_binary(stack_a);
	reverse_rotate_binary(stack_b);
}
