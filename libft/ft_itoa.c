/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 00:56:17 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 23:53:45 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	register int	i;
	register int	len;
	register char	*res;
	register int	neg;

	i = n;
	len = i < 0 ? 2 : 1;
	neg = i < 0 ? -1 : 1;
	while (i /= 10)
		len++;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = n;
	while (len--)
	{
		res[len] = '0' + i % 10 * neg;
		i /= 10;
	}
	res[0] = neg > 0 ? res[0] : '-';
	return (res);
}
