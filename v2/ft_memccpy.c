/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 15:03:39 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:34:19 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (n > i)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			return (dest + i + 1);
		}
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (NULL);
}
