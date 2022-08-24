/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:10:38 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:10:41 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	push(t_stack *stack_a, t_stack *stack_b, char *msg)
{
	int	i;

	stack_b->len--;
	stack_a->len++;
	stack_a->new_arr = malloc(sizeof(int) * stack_a->len);
	stack_b->new_arr = malloc(sizeof(int) * stack_b->len);
	if (!stack_a->new_arr || !stack_b->new_arr)
		return ;
	i = 1;
	while (i < stack_a->len)
	{
		stack_a->new_arr[i] = stack_a->arr[i - 1];
		i++;
	}
	stack_a->new_arr[0] = stack_b->arr[0];
	i = -1;
	while (++i < stack_b->len)
		stack_b->new_arr[i] = stack_b->arr[i + 1];
	free(stack_a->arr);
	free(stack_b->arr);
	stack_a->arr = stack_a->new_arr;
	stack_b->arr = stack_b->new_arr;
	ft_putstr(msg);
}

void	push_binary(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	stack_a->new_rank_bin = (int **)malloc(sizeof(int *) * stack_a->len);
	stack_b->new_rank_bin = (int **)malloc(sizeof(int *) * stack_b->len);
	if (!stack_a->new_rank_bin || !stack_b->new_rank_bin)
		return ;
	i = 1;
	while (i < stack_a->len)
	{
		stack_a->new_rank_bin[i] = stack_a->rank_bin[i - 1];
		i++;
	}
	stack_a->new_rank_bin[0] = stack_b->rank_bin[0];
	i = 0;
	while (i < stack_b->len)
	{
		stack_b->new_rank_bin[i] = stack_b->rank_bin[i + 1];
		i++;
	}
	free (stack_a->rank_bin);
	free (stack_b->rank_bin);
	stack_a->rank_bin = stack_a->new_rank_bin;
	stack_b->rank_bin = stack_b->new_rank_bin;
}
