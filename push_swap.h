/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:47:12 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/07 19:23:08 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


void	ft_print_msg(char *msg);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_parsing(int ac, char **av);
int		ft_isdigit(int c);
void	check_arg(char *tab, char **list);
void	check_double_number(char **list);
void	check_sort(char **list);

#endif