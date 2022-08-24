/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:12:47 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:12:49 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

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

void	push_suit(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 1;
	while (i < stack_a->len)
	{
		stack_a->new_arr[i] = stack_a->arr[i - 1];
		i++;
	}
	stack_a->new_arr[0] = stack_b->arr[0];
	i = 0;
	while (i < stack_b->len)
	{
		stack_b->new_arr[i] = stack_b->arr[i + 1];
		i++;
	}
}

void	push(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (stack_b->arr != NULL)
	{
		stack_b->len--;
		stack_a->len++;
		stack_a->new_arr = malloc(sizeof(int) * stack_a->len);
		stack_b->new_arr = malloc(sizeof(int) * stack_b->len);
		if (!stack_a->new_arr || !stack_b->new_arr)
			return ;
		push_suit(stack_a, stack_b);
		free(stack_a->arr);
		free(stack_b->arr);
		stack_a->arr = stack_a->new_arr;
		stack_b->arr = stack_b->new_arr;
	}
}
