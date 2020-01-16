/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoisplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <mzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 23:20:00 by mzhu              #+#    #+#             */
/*   Updated: 2019/12/02 15:25:11 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			*ft_atoisplit(const char *str, int c)
{
	int			*tab;
	int			ind;
	int			result;
	int			nb_int;
	int			pos;
	
	pos = 0;
	ind = 0;
	result = 0;
	nb_int = ft_count_word(str, ' ');
	if (!(tab = (int*)malloc(sizeof(int) * nb_int)))
		return (NULL);
	while (str[ind])
	{
		while (str[ind] == c && str[ind])
			ind++;
		if (str[ind] != c && str[ind])
		{
			tab[pos] = ft_atoi(str + ind);
			pos++;
		}
		while (str[ind] != c && str[ind])
			ind++;
	}
	return (tab);
}