/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 22:33:10 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 11:58:26 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	register unsigned char	*ptr;
	register unsigned char	ch;

	ch = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n && *ptr != ch)
	{
		n--;
		ptr++;
	}
	if (n)
		return (void *)ptr;
	return (NULL);
}
