/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 22:36:12 by mzhu              #+#    #+#             */
/*   Updated: 2019/04/29 00:02:43 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_strnew(size_t size)
{
	char		*mem;
	size_t		i;

	i = 0;
	if (!(mem = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(mem, 0, size + 1);
	return (mem);
}
