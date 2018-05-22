/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 08:43:04 by zwen              #+#    #+#             */
/*   Updated: 2018/05/13 12:55:45 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	register size_t	n;
	register char	*dupstr;

	n = ft_strlen(s1);
	dupstr = ft_strnew(n);
	if (dupstr)
		ft_memcpy(dupstr, s1, n);
	return (dupstr);
}
