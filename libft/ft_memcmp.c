/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 02:09:37 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 21:21:39 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	register unsigned char	*ps1;
	register unsigned char	*ps2;
	register size_t			i;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = n;
	while (i--)
		if (*ps1++ != *ps2++)
			return (*--ps1 - *--ps2);
	return (0);
}
