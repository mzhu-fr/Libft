/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 16:55:22 by mzhu              #+#    #+#             */
/*   Updated: 2019/10/27 18:14:20 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strndup(const char *str, size_t n)
{
	size_t			i;
	size_t			len;
	char			*s;

	i = -1;
	len = ft_strlen(str);
	if (n >= len)
		ft_strdup(str);
	if (!(s = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (str[++i] && i < n)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
