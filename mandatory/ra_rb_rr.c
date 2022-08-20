/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:45:09 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/18 17:49:57 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack_a, char *str)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_a->arr[0];
	while (i < stack_a->len - 1)
	{
		stack_a->arr[i] = stack_a->arr[i + 1];
		i++;
	}
	stack_a->arr[stack_a->len - 1] = tmp;
	ft_putstr(str);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, "ra");
	rotate(stack_b, "rb");
	ft_putstr("rr");
}

void	rotate_binary(t_stack *stack_a, char *str)
{
	int	i;
	int	*tmp ;

	i = 0;
	tmp = stack_a->rank_bin[0];
	while (i < stack_a->len - 1)
	{
		stack_a->rank_bin[i] = stack_a->rank_bin[i + 1];
		i++;
	}
	stack_a->rank_bin[stack_a->len - 1] = tmp;
	ft_putstr(str);
}

void	rr_binary(t_stack *stack_a, t_stack *stack_b)
{
	rotate_binary(stack_a, "ra");
	rotate_binary(stack_b, "rb");
	ft_putstr("rr");
}
