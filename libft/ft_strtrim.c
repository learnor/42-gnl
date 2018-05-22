/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:59:19 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 23:44:03 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	register char	*ret;
	register char	*ptr;
	register int	len;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	while (ft_isspace(*ptr))
		ptr++;
	len = ft_strlen(ptr);
	while (len && ft_isspace(ptr[len - 1]))
		len--;
	ret = (char *)malloc(sizeof(*ret) * (len + 1));
	if (ret)
		ret[len] = '\0';
	return (ret ? ft_strncpy(ret, ptr, len) : NULL);
}
