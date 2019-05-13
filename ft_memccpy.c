/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 15:03:39 by mzhu              #+#    #+#             */
/*   Updated: 2019/04/28 16:41:18 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	char			*sc;
	char			*dst;

	sc = (char*)src;
	dst = (char*)dest;
	i = 0;
	while (n > i)
	{
		if (sc[i] == (char)c)
		{
			dst[i] = sc[i];
			return (dest + i + 1);
		}
		dst[i] = sc[i];
		i++;
	}
	return (NULL);
}
