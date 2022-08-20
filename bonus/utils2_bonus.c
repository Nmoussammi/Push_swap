/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:48:54 by nmoussam          #+#    #+#             */
/*   Updated: 2022/08/19 17:49:42 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	nb_words(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	size_word(char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

static int	get_index(int i, char c, char *str)
{
	while (str[i] == c)
		i++;
	return (i);
}

static char	**ft_free(int a, char **new)
{
	while (a > 0)
	{
		free(new[a]);
		a--;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	int		a;
	int		i;
	int		b;
	char	**new;

	if (!s)
		return (NULL);
	new = (char **)malloc((nb_words(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	a = 0;
	i = 0;
	while (a < nb_words(s, c))
	{
		b = 0;
		new[a] = malloc(size_word(&s[i], c) + 1);
		if (!new[a])
			return (ft_free(a, new));
		i = get_index(i, c, s);
		while (s[i] != c && s[i])
			new[a][b++] = s[i++];
		new[a++][b] = '\0';
	}
	new[a] = NULL;
	return (new);
}
