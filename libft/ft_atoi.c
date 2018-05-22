/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 00:29:12 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 14:46:52 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	register int long	res;
	register int		neg;
	register const char	*s;
	register int long	tmp;

	s = str;
	while (*s && ft_isspace(*s))
		s++;
	neg = 1;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			neg = -1;
	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		tmp = res * 10 + neg * (*s++ - '0');
		if (neg > 0 && tmp < res)
			return (-1);
		if (neg < 0 && tmp > res)
			return (0);
		res = tmp;
	}
	return ((int)res);
}
