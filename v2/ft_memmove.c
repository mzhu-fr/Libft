/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:09:40 by mzhu              #+#    #+#             */
/*   Updated: 2019/10/27 16:54:02 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *sc;
	unsigned char *dst;

	sc = (unsigned char*)src;
	dst = (unsigned char*)dest;
	if (sc < dst)
	{
		while (n > 0)
		{
			*(dst + n - 1) = *(sc + n - 1);
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
