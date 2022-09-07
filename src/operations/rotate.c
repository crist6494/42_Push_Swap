/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:04:59 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 18:42:10 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_node **stack_a, int print)
{
	t_node	*old_first;
	t_node	*old_last;
	t_node	*new_first;

	old_first = *stack_a;
	old_last = *stack_a;
	while (old_last->nxt)
		old_last = old_last->nxt;
	old_last->nxt = old_first;
	new_first = old_first->nxt;
	old_first->nxt = NULL;
	*stack_a = new_first;
	if (print)
		ft_printf("ra\n");
}

void	rb(t_node **stack_b, int print)
{
	t_node	*old_first;
	t_node	*old_last;
	t_node	*new_first;

	old_first = *stack_b;
	old_last = *stack_b;
	while (old_last->nxt)
		old_last = old_last->nxt;
	old_last->nxt = old_first;
	new_first = old_first->nxt;
	old_first->nxt = NULL;
	*stack_b = new_first;
	if (print)
		ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b, int print)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (print)
		ft_printf("rr\n");
}
