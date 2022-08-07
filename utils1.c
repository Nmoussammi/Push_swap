/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:11:06 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/07 18:04:31 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	long int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 0 || (str[i] <= 13 && str[i] >= 9))
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
	if((sign * result) > 2147483647 || 	(sign * result)	< -2147483648)
		ft_print_msg("it's not integer\n");
	return (sign * result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*new;

	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] && i < ft_strlen(s1) + ft_strlen(s2) + 1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && i < ft_strlen(s1) + ft_strlen(s2) + 1)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
