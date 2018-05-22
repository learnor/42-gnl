/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 00:13:21 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 21:29:27 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	register char	*ptr;

	ptr = (char *)malloc(sizeof(*ptr) * (++size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
