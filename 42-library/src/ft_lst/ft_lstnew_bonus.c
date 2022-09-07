/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:34:15 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/11 19:47:57 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*esp;

	esp = (t_list *)malloc(sizeof(t_list));
	if (!esp)
		return (0);
	esp->content = content;
	esp->next = 0;
	return (esp);
}
