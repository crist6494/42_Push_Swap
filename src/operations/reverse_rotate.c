/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:38:12 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 18:22:58 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_node **stack_a, int print)
{
	t_node	*tmp;
	t_node	*val;

	tmp = (*stack_a);
	while (tmp->nxt->nxt != NULL)
		tmp = tmp->nxt;
	val = tmp->nxt;
	val->nxt = (*stack_a);
	(*stack_a) = val;
	tmp->nxt = NULL;
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_node **stack_b, int print)
{
	t_node	*tmp;
	t_node	*val;

	tmp = (*stack_b);
	while (tmp->nxt->nxt != NULL)
		tmp = tmp->nxt;
	val = tmp->nxt;
	val->nxt = (*stack_b);
	(*stack_b) = val;
	tmp->nxt = NULL;
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b, int print)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if (print)
		ft_printf("rrr\n");
}
