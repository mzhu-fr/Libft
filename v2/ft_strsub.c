/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 00:26:11 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:30:34 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tp;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tp = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[start] && i < len)
	{
		tp[i] = s[start];
		start++;
		i++;
	}
	tp[i] = '\0';
	return (tp);
}
