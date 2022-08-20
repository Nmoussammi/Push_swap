/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:30:21 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/19 20:43:44 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate(t_stack *stack_a)
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
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
