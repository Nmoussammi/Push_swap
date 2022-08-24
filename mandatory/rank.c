/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:11:13 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:11:15 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_array(t_stack *stack)
{
	int	*new;
	int	i;
	int	j;
	int	tmp;

	new = ft_strdup_int(stack);
	i = -1;
	while (++i < stack->len)
	{
		j = i + 1;
		while (j < stack->len)
		{
			if (new[i] > new[j])
			{
				tmp = new[i];
				new[i] = new[j];
				new[j] = tmp;
			}
			j++;
		}
	}
	return (new);
}

int	*rank_array(t_stack *stack)
{
	int	*tab_sorted;
	int	i;
	int	j;
	int	k;

	tab_sorted = sort_array(stack);
	i = 0;
	k = 0;
	j = 0;
	while (i < stack->len)
	{
		j = 0;
		while (stack->arr[i] != tab_sorted[j] && j < stack->len)
			j++;
		if (stack->arr[i] == tab_sorted[j])
		{
			stack->rank[k] = j;
			k++;
		}
		i++;
	}
	free(tab_sorted);
	return (stack->rank);
}
