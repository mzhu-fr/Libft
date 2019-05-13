/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:49:38 by mzhu              #+#    #+#             */
/*   Updated: 2019/04/25 19:36:03 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strstr(const char *str, const char *lf)
{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0' && lf[0] == '\0')
		return ((char*)&str[i]);
	while (str[i])
	{
		j = 0;
		while (lf[j] && lf[j] == str[i + j])
			j++;
		if (lf[j] == '\0')
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
