/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <mzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 19:35:55 by mzhu              #+#    #+#             */
/*   Updated: 2019/12/10 23:49:26 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_atoi(const char *nb)
{
	int		read;
	int		cont;
	int		sign;

	sign = 1;
	read = 0;
	cont = 0;
	while (nb[read] == ' ' || (nb[read] >= '\t' && nb[read] <= '\r'))
		read++;
	if (nb[read] == '-' || nb[read] == '+')
	{
		if (nb[read] == '-')
			sign = -1;
		read++;
	}
	while (nb[read] >= '0' && nb[read] <= '9')
	{
		cont = cont * 10 + (nb[read] - '0');
		read++;
	}
	return (cont * sign);
}