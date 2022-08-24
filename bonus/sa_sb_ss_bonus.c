/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:13:29 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:13:31 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_stack *stack_a)
{
	int	tmp;

	if (stack_a->len >= 2)
	{
		tmp = stack_a->arr[0];
		stack_a->arr[0] = stack_a->arr[1];
		stack_a->arr[1] = tmp;
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
