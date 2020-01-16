/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:54:20 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:30:56 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *str, const char *lf, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (str[0] == '\0')
		return (NULL);
	if (lf[0] == '\0')
		return ((char*)&str[i]);
	while (str[i] && i < len)
	{
		j = 0;
		while (lf[j] && lf[j] == str[i + j] && (i + j) < len)
		{
			j++;
			if (lf[j] == '\0')
				return ((char*)&str[i]);
		}
		i++;
	}
	return (NULL);
}
