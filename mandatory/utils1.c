/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:11:44 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/24 15:11:46 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int			i;
	long int	result;
	int			sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (int)(str[i] - '0');
		i++;
	}
	if ((sign * result) > 2147483647 || (sign * result) < -2147483648)
		ft_print_msg("error\n");
	return (sign * result);
}

char	*ft_strdup(char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	*ft_strdup_int(t_stack *stack)
{
	int	*new;
	int	i;

	new = (int *)malloc(sizeof(int) * stack->len);
	if (!new)
		return (0);
	i = -1;
	while (++i < stack->len)
		new[i] = stack->arr[i];
	return (new);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		size_s1;
	int		size_s2;
	char	*new;

	if (!s1)
		s1 = ft_strdup("");
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	new = (char *)malloc((size_s1 + size_s2) + 1 * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < size_s2)
		new[i++] = s2[j++];
	new[i] = '\0';
	free(s1);
	return (new);
}
