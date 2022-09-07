/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:54:02 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 18:53:19 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b, int print)
/* take node from top of stack b and put it on top stack a
 do nothing if stack b is empty */
{
	t_node	*tmp;
	t_node	*node;

	if (!*stack_b)
		return ;
	node = (*stack_b)->nxt;
	tmp = *stack_b;
	tmp->nxt = *stack_a;
	*stack_a = tmp;
	*stack_b = node;
	if (print)
		ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b, int print)
/* take node from top of stack a and put it on top stack b
do nothing if stack a is empty */
{
	t_node	*tmp;
	t_node	*node;

	if (!*stack_a)
		return ;
	node = (*stack_a)->nxt;
	tmp = *stack_a;
	tmp->nxt = *stack_b;
	*stack_b = tmp;
	*stack_a = node;
	if (print)
		ft_printf("pb\n");
}
