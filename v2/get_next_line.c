/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 19:00:24 by mzhu              #+#    #+#             */
/*   Updated: 2019/08/22 17:04:12 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char		*ft_read_line(char **stock, int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		rd;

	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		if (!*stock)
			*stock = ft_strdup(buf);
		else
			*stock = ft_strjoin_free(*stock, buf);
		if (ft_strchr(*stock, '\n'))
			break ;
	}
	return (*stock);
}

int		get_next_line(const int fd, char **line)
{
	static char		*stock[1024];
	char			*tmp;
	int				i;

	i = 0;
	if (!line || fd < 0 || fd > 1024 || (read(fd, &stock[fd], 0) < 0))
		return (-1);
	stock[fd] = ft_read_line(&stock[fd], fd);
	while (stock[fd][i] && stock[fd][i] != '\n')
		i++;
	*line = (ft_strchr(stock[fd], '\n'))
		? ft_strsub(stock[fd], 0, i) : ft_strcdup(stock[fd], '\n');
	tmp = stock[fd];
	stock[fd] = (ft_strchr(stock[fd], '\n'))
		? ft_strsub(stock[fd], i + 1, ft_strlen(stock[fd])) : ft_strdup("");
	return((stock[fd][i] == '\0' && i == 0 && tmp[0] == '\0') ? 0 : 1);
}
