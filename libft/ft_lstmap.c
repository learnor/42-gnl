/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 02:15:49 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 11:09:12 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*lst_p;

	ret = (lst && f) ? f(lst) : NULL;
	lst_p = ret;
	while (lst_p && lst->next)
	{
		lst_p->next = f(lst->next);
		lst = lst->next;
		lst_p = lst_p->next;
	}
	return (ret);
}
