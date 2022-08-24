/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:11:27 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:11:29 by nmoussam         ###   ########.fr       */
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
