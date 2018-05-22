/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:30:53 by zwen              #+#    #+#             */
/*   Updated: 2018/04/19 17:12:15 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	register int	i;
	register char	*hptr;
	register char	*nptr;
	register int	n;

	hptr = (char *)haystack;
	nptr = (char *)needle;
	if (!(*nptr))
		return (hptr);
	n = ft_strlen(hptr) - ft_strlen(nptr) + 1;
	while (n-- > 0)
	{
		if (*hptr == *nptr)
		{
			i = -1;
			while (nptr[++i])
				if (hptr[i] != nptr[i])
					break ;
			if (nptr[i] == '\0')
				return (hptr);
		}
		hptr++;
	}
	return (NULL);
}
