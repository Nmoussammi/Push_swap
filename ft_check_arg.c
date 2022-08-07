/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:01:22 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/07 19:25:19 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_parsing(int ac, char **av)
{
	int i;
	char *list;

	i = 1;
	list = (char *)malloc(ac * sizeof(char));
	if (!list)
		return(NULL);
	while (i < ac)
	{
		list = ft_strjoin(list, av[i]);
		list = ft_strjoin(list, " ");
		i++;
	}
	return (list);
}

void	check_double_number(char **list)
{
	int len;
	int i;
	int j;

	i = 0;
	len = 0;
	while(list[len])
		len++;
	while (i < len - 1)
	{
		j = i + 1;
		while(j < len)
		{
			if (ft_atoi(list[i]) == ft_atoi(list[j]))
				ft_print_msg("Double number\n");
			j++;
		}
		i++;
	}
}
void	check_sort(char **list)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while(list[len])
		len++;
	while (list[i] && i < len - 1 && ft_atoi(list[i]) < ft_atoi(list[i + 1]))
		i++;
	
	if ((i + 1) == len)
		ft_print_msg("Stack is sorted\n");
	
}
void	check_arg(char *tab, char **list)
{
    int	i;
	int len;

	i = 0;
	len = ft_strlen(tab);
	check_double_number(list);
	while (tab[i] && i < len)
	{
		if (ft_isdigit(tab[i]) == 1 || tab[i] == ' ')
			i++;
		else if ((tab[i] == '+' || tab[i] == '-') && ft_isdigit(tab[i + 1]) == 1)
			i++;
		else if (ft_isdigit(tab[i]) == 1 && ft_isdigit(tab[i + 1]) == 0)
			ft_print_msg("Erreur :\n \t Invalid element :(");
		else if ((tab[i] == '+' || tab[i] == '-') && ft_isdigit(tab[i + 1]) == 0)
			ft_print_msg("Erreur :\n \t Invalid element :(");
		else if (ft_isdigit(tab[i]) == 0)
			ft_print_msg("Erreur :\n \t Invalid element :(");
	}
	check_sort(list);
}
