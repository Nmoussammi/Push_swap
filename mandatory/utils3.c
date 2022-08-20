/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:36:55 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/18 18:02:47 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr_sign(char *str)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '+' || str[i] == '-')
			cpt++;
		i++;
	}
	return (cpt);
}

int	len_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->list[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	ft_print_msg(char *msg)
{
	int	i;

	i = 0;
	while (msg[i] != '\0')
	{
		write(1, &msg[i], 1);
		i++;
	}
	exit(1);
}
