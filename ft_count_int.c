/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:35:33 by mzhu              #+#    #+#             */
/*   Updated: 2019/04/29 22:23:27 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_int(int nb)
{
	long		n;
	size_t		count;

	count = 0;
	n = nb;
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	if (n < 10)
	{
		count++;
		return (count);
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
