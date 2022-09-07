/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:28:23 by cmorales          #+#    #+#             */
/*   Updated: 2022/06/30 18:33:35 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	t_list	*clon;

	if (!*lst)
		*lst = new_lst;
	else
	{	
		clon = *lst;
		while (clon->next)
			clon = clon->next;
		clon->next = new_lst;
	}
}
