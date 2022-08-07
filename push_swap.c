/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:46:19 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/07 19:32:48 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char 	*tab;
	char	**list;
	if (argc > 1)
	{
		tab = ft_parsing(argc, argv); // join all number in table one dimension with space
		list = ft_split(tab, ' '); // table 2 dimensions (stack a)
		check_arg(tab, list); // check double + check invalid element + check if sorted

	}
	else
		ft_print_msg("Error\n");
}