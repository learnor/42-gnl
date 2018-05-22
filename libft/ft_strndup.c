/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 10:48:24 by zwen              #+#    #+#             */
/*   Updated: 2018/05/13 12:56:33 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	register char	*dupstr;

	dupstr = ft_strnew(n);
	if (dupstr)
		ft_memcpy(dupstr, s1, n);
	return (dupstr);
}
