/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 17:56:46 by zwen              #+#    #+#             */
/*   Updated: 2018/04/23 18:36:39 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	register int	i;
	register int	base;
	char			c;

	base = 1;
	i = n;
	while ((i / base) / 10)
		base *= 10;
	i = n;
	if (i < 0)
	{
		write(1, "-", 1);
		c = '0' + i / base * (-1);
		write(1, &c, 1);
		i = i % base * (-1);
		base /= 10;
	}
	while (base)
	{
		c = '0' + i / base;
		write(1, &c, 1);
		i %= base;
		base /= 10;
	}
}
