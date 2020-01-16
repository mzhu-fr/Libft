/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 16:20:22 by mzhu              #+#    #+#             */
/*   Updated: 2019/10/27 16:25:32 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_strjoin_free(char const *s1, char const *s2)
{
	size_t				i;
	size_t				j;
	unsigned char		*free_s1;
	char				*cat;

	i = -1;
	j = -1;
	free_s1 = (unsigned char*)s1;
	if (!s1 || !s2)
		return (NULL);
	if (!(cat = (char*)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[++i])
		cat[i] = s1[i];
	while (s2[++j])
		cat[i + j] = s2[j];
	cat[i + j] = '\0';
	free(free_s1);
	return (cat);
}
