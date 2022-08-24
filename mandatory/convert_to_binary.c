/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_binary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:10:15 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:10:20 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nb_binary(int nb)
{
	int	size;

	size = 0;
	while (nb > 0)
	{
		nb = nb / 2;
		size++;
	}
	return (size);
}

int	*reverse_array(t_stack *stack, int *tab)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = stack->max_size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
	return (tab);
}

int	*convert_one_number(t_stack *stack, int num)
{
	int	max;
	int	i;
	int	*nb;

	i = 0;
	max = find_max(stack);
	stack->max_size = nb_binary(max);
	nb = (int *)malloc(sizeof(int) * stack->max_size);
	if (!nb)
		return (0);
	while (i < stack->max_size)
	{
		nb[i] = num % 2;
		num /= 2;
		i++;
	}
	nb = reverse_array(stack, nb);
	return (nb);
}

int	**convert_all_numbers(t_stack *stack)
{
	int	i;

	i = 0;
	stack->rank_bin = (int **)malloc(sizeof(int *) * stack->len);
	if (!stack->rank_bin)
		return (0);
	while (i < stack->len)
	{
		stack->rank_bin[i] = convert_one_number(stack, stack->rank[i]);
		i++;
	}
	return (stack->rank_bin);
}
