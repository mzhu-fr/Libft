/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:33:10 by mzhu              #+#    #+#             */
/*   Updated: 2019/05/01 03:43:16 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int			ft_count_word(char const *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			x;
	size_t		i;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char *) * (ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			tab[x] = ft_strcdup(s + i, c);
			x++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	tab[x] = 0;
	return (tab);
}
