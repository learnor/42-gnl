/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 21:44:40 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 21:01:43 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	register char		*d;
	register const char	*s;
	register size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = len;
	if (s < d)
		while (i--)
			d[i] = s[i];
	else
		while (i--)
			*d++ = *s++;
	return (dst);
}
