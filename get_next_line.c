/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 23:22:01 by zwen              #+#    #+#             */
/*   Updated: 2018/05/14 01:06:26 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

int			get_next_line(int fd, char **line)
{
	static char	*str[1024];
	char		buf[BUFF_SIZE + 1];
	char		*nlptr;
	int			len;
	char		*tmp;

	if (fd == -1 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	if ((nlptr = ft_strchr(str[fd], '\n')))
	{
		*line = ft_strndup(str[fd], nlptr - str[fd]);
		tmp = str[fd];
		str[fd] = ft_strdup(nlptr + 1);
		ft_strdel(&tmp);
		return (1);
	}
	while ((len = read(fd, buf, BUFF_SIZE)))
	{
		buf[len] = '\0';
		tmp = str[fd];
		str[fd] = ft_strjoin(str[fd], buf);
		free(tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if ((nlptr = ft_strchr(str[fd], '\n')))
	{	
		*line = ft_strndup(str[fd], nlptr - str[fd]);
		tmp = str[fd];
		str[fd] = ft_strdup(nlptr + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(str[fd]);
	if (!str[fd] || !*str[fd])
		return (0);
	ft_strdel(&str[fd]);
	return (1);
}
