/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 09:16:02 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 22:57:10 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	register size_t	ns;

	ns = ft_strlen(src);
	ns = ns < len ? ns : len;
	ft_memcpy(dst, src, ns);
	len = len > ns ? len - ns : 0;
	ft_bzero(dst + ns, len);
	return (dst);
}
