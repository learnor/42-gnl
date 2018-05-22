/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:59:35 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 20:56:45 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(
		void *restrict dst, const void *restrict src, int c, size_t n)
{
	register char			*d;
	register const char		*s;
	register char			ch;
	register size_t			i;

	d = (char *)dst;
	s = (const char *)src;
	ch = (char)c;
	i = n;
	while (i--)
		if ((*d++ = *s++) == ch)
			return (d);
	return (NULL);
}
