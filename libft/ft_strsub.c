/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 03:50:07 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 22:07:39 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	register char	*ptr;
	register char	*sub;
	register size_t	i;
	register size_t st;

	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (!s || !sub)
		return (NULL);
	ptr = (char *)s;
	st = (size_t)start;
	i = (size_t)len;
	sub[i] = '\0';
	while (i--)
		sub[i] = ptr[st + i];
	return (sub);
}
