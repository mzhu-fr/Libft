/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:36:50 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:31:29 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strtrim(char const *s)
{
	char		*tp;
	size_t		start;
	size_t		end;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	start = i;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (s[i])
		i++;
	i = i - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	end = i - start;
	if (!(tp = ft_strsub(s, start, end + 1)))
		return (NULL);
	return (tp);
}
