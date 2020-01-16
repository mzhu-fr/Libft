/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:33:10 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:36:45 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
