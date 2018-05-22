/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 11:54:40 by zwen              #+#    #+#             */
/*   Updated: 2018/04/19 12:04:41 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	register const char	*ptr;

	ptr = s;
	while (*ptr)
		if (*ptr++ == c)
			return ((char *)--ptr);
	if (c == '\0')
		return ((char *)ptr);
	return (NULL);
}
