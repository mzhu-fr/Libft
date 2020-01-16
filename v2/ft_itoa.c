/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:53:25 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:34:54 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	void		ft_fillitoa(int nbr, char *str, size_t index)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_fillitoa((nb / 10), str, index - 1);
		str[index] = (nb % 10) + '0';
	}
	else
		str[index] = ((nb % 10) + '0');
}

char				*ft_itoa(int n)
{
	char	*nbr;
	size_t	ind;

	ind = ft_count_int(n);
	if (!(nbr = (char*)malloc(sizeof(char) * (ind + 1))))
		return (NULL);
	ft_fillitoa(n, nbr, ind - 1);
	nbr[ind] = '\0';
	return (nbr);
}
