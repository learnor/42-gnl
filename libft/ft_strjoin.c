/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:47:11 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 22:22:07 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	register char	*ret;

	ret = (s1 && s2) ? ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1) : NULL;
	if (!ret)
		return (NULL);
	ft_strcpy(ret, s1);
	return (ft_strcat(ret, s2));
}
