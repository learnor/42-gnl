/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 23:22:01 by zwen              #+#    #+#             */
/*   Updated: 2018/05/13 14:34:29 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(int fd, char **line)
{
	static char	*str;
	char		buf[BUFF_SIZE + 1];
	char		*nlptr;
	int			len;

	if (fd == -1 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (str && (nlptr = ft_strchr(str, '\n')))
	{
		*line = ft_strndup(str, nlptr - str);
		ft_strdel(&str);
		str = ft_strdup(nlptr + 1);
		return (1);
	}
	while ((len = read(fd, buf, BUFF_SIZE)))
	{
		if (!str)
			str = ft_strnew(0);
		buf[len] = '\0';
		free(str);
		str = ft_strjoin(str, buf);
		if (ft_strchr(buf, '\n'))
		{
			nlptr = ft_strchr(str, '\n');
			*line = ft_strndup(str, nlptr - str);
			ft_strdel(&str);
			str = ft_strdup(nlptr + 1);
			return (1);
		}
	}
	*line = ft_strdup(str);
	if (!ft_strlen(str))
		return (len);
	ft_strdel(&str);
	return (1);
}
