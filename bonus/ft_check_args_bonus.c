/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:12:33 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:12:35 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_parsing(int ac, char **av)
{
	int		i;
	char	*tab;

	i = 1;
	tab = ft_strdup("");
	while (i < ac)
	{
		if (av[i][0] == '\0')
			ft_print_msg("error\n");
		tab = ft_strjoin(tab, av[i]);
		tab = ft_strjoin(tab, " ");
		i++;
	}
	return (tab);
}

void	check_double_number(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len)
	{
		j = i + 1;
		while (j < stack->len)
		{
			if (stack->arr[i] == stack->arr[j])
				ft_print_msg("Error\n");
			j++;
		}
		i++;
	}
}

int	check_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while ((i < (stack->len) - 1) && (stack->arr[i] < stack->arr[i + 1]))
		i++;
	if ((i + 1) == stack->len)
		return (1);
	return (0);
}

void	check_arg(t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack->len)
	{
		j = 0;
		while (j < ft_strlen(stack->list[i]))
		{
			while (ft_isdigit(stack->list[i][j]) == 1)
				j++;
			if (nbr_sign(stack->list[i]) > 1)
				ft_print_msg("Error\n");
			else if (nbr_sign(stack->list[i]) == 1 && ((stack->list[i][0] \
			!= '+' && stack->list[i][0] != '-') || stack->list[i][1] == '\0'))
				ft_print_msg("Error\n");
			else if ((stack->list[i][j] != '+' && stack->list[i][j] != '-') \
			&& (stack->list[i][j] < '0' || stack->list[i][j] > '9') && \
			stack->list[i][j] != '\0')
			{
				ft_print_msg("Error\n");
			}
			j++;
		}
	}
}

void	check_all(t_stack *stack, int argc, char **argv)
{
	int	i;

	stack->tab = ft_parsing(argc, argv);
	stack->list = ft_split(stack->tab, ' ');
	stack->len = len_stack(stack);
	stack->arr = (int *)malloc(4 * stack->len);
	if (!stack->arr)
		return ;
	check_arg(stack);
	i = 0;
	while (i < stack->len)
	{
		stack->arr[i] = ft_atoi(stack->list[i]);
		i++;
	}
	check_double_number(stack);
}
