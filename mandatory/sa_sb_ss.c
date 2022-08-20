/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:46:21 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/18 00:06:09 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack_a, char *str)
{
	int	tmp;

	if (stack_a->len >= 2)
	{
		tmp = stack_a->arr[0];
		stack_a->arr[0] = stack_a->arr[1];
		stack_a->arr[1] = tmp;
	}
	ft_putstr(str);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, "sa");
	swap(stack_b, "sb");
	ft_putstr("ss");
}
