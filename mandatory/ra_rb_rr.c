/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:10:57 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:10:59 by nmoussam         ###   ########.fr       */
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
	if (str != NULL)
		ft_putstr(str);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_putstr("rr");
}

void	rotate_binary(t_stack *stack_a)
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
}

void	rr_binary(t_stack *stack_a, t_stack *stack_b)
{
	rotate_binary(stack_a);
	rotate_binary(stack_b);
}
