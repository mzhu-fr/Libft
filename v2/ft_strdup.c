/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:12:34 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:36:20 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strdup(const char *str)
{
	char		*mem;
	size_t		i;
	size_t		count;

	i = 0;
	count = ft_strlen(str);
	if (!(mem = (char*)malloc(sizeof(char) * count + 1)))
		return (NULL);
	while (str[i])
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
