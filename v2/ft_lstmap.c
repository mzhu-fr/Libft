/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 21:32:45 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:35:13 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*current;
	t_list		*cont;

	if (!lst || !f)
		return (NULL);
	if (!(cont = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	cont = (*f)(lst);
	current = cont;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		tmp = (*f)(lst);
		current->next = tmp;
		current = tmp;
		free(tmp);
		lst = lst->next;
	}
	return (cont);
}
