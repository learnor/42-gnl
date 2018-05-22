/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:08:13 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 12:18:31 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	register size_t	ns1;
	register size_t	ns2;

	ns1 = ft_strlen(s1);
	ns2 = ft_strlen(s2);
	ft_memcpy(s1 + ns1, s2, n = ns2 < n ? ns2 : n);
	s1[ns1 + n] = '\0';
	return (s1);
}
