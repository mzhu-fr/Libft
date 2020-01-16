/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:34:15 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:33:51 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strcdup(const char *str, char c)
{
	char		*mem;
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (str[count] && str[count] != c)
		count++;
	if (!(mem = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	while (i < count)
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
