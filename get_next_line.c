/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 23:22:01 by zwen              #+#    #+#             */
/*   Updated: 2018/05/13 21:23:19 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

/*
static int	ft_get_line(char **str, char *nlptr, char *line)
{
	puts("2\n");
	line = ft_strndup(*str, nlptr - *str);
	ft_strdel(str);
	*str = ft_strdup(nlptr + 1);
	return (1);
}
*/

int			get_next_line(int fd, char **line)
{
	static char	*str;
	char		*buf;
	char		*nlptr;

	buf = ft_strnew(BUFF_SIZE);
	if (fd == -1 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!str)
		str = ft_strnew(0);
//	if ((nlptr = ft_strchr(str, '\n')))
//	{
//		puts("3\n");
//		*line = ft_strndup(str, nlptr - str);
//		ft_strdel(&str);
//		str = ft_strdup(nlptr + 1);
//		return (1);
//	}
	while (!(nlptr = ft_strchr(str, '\n')) && read(fd, buf, BUFF_SIZE))
	{
		free(str);
		str = ft_strjoin(str, buf);
	//	if (ft_strchr(buf, '\n'))
	//		break ;
	}
//	puts("1\n");
//	if ((nlptr = ft_strchr(str, '\n')))
//		return (ft_get_line(&str, nlptr, *line));
	if (nlptr)
	{	
		*line = ft_strndup(str, nlptr - str);
		ft_strdel(&str);
		str = ft_strdup(nlptr + 1);
		return (1);
	}
	*line = ft_strdup(str);
	if (!ft_strlen(str))
		return (0);
	ft_strdel(&str);
	return (1);
}
