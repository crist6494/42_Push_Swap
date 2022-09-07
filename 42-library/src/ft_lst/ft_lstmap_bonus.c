/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:37:31 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 14:55:43 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*pos_new;
	t_list	*pos_old;

	if (!lst)
		return (0);
	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (0);
	pos_new = new_lst;
	pos_old = lst->next;
	while (pos_old)
	{
		pos_new->next = ft_lstnew((*f)(pos_old->content));
		if (!(pos_new->next))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		pos_new = pos_new->next;
		pos_old = pos_old->next;
	}
	return (new_lst);
}
