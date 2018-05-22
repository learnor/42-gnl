/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 01:07:22 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 01:51:42 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!alst || !*alst)
		return ;
	while (*alst)
	{
		tmp = *alst;
		*alst = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = NULL;
	}
}
