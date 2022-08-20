/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:39:13 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/19 14:22:31 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *stack)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < stack->len)
	{
		if (stack->arr[j] > stack->arr[i])
			j = i;
		i++;
	}
	return (stack->arr[j]);
}

int	find_max(t_stack *stack)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < stack->len)
	{
		if (stack->rank[j] < stack->rank[i])
			j = i;
		i++;
	}
	return (stack->rank[j]);
}
