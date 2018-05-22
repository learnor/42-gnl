/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 23:55:52 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 13:49:12 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	register unsigned char	*ps1;
	register unsigned char	*ps2;
	register size_t			i;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = n;
	while (i-- && *ps1++ == *ps2++ && *(ps1 - 1))
		;
	return (*--ps1 - *--ps2);
}
