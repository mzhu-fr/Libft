/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 00:05:15 by mzhu              #+#    #+#             */
/*   Updated: 2019/05/01 02:42:44 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*tp;

	i = 0;
	if (!s && !f)
		return (NULL);
	if (!(tp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			tp[i] = f(s[i]);
			i++;
		}
		tp[i] = '\0';
		return (tp);
	}
	return (0);
}
