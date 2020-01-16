/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:36:45 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:36:08 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	char		*mem;
	size_t		i;

	i = 0;
	if (!(mem = (char *)malloc(size)))
		return (NULL);
	while (i < size)
	{
		ft_bzero(mem, size);
		i++;
	}
	return (mem);
}
