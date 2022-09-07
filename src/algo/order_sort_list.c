/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_sort_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:45:09 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 18:48:30 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	order_2(t_node **stack_a)
{
	int	a;
	int	b;

	a = (*stack_a)->value;
	b = (*stack_a)->nxt->value;
	if (a > b)
		sa(stack_a, 1);
	else
		return ;
}

void	order_3(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->nxt->value;
	c = (*stack_a)->nxt->nxt->value;
	if (a > b && b > c)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (a > b && c < a)
		ra(stack_a, 1);
	else if (a > b && b < c)
		sa(stack_a, 1);
	else if (a < b && c < a)
		rra(stack_a, 1);
	else if (a < b && c > a && b > c)
	{
		rra(stack_a, 1);
		sa(stack_a, 1);
	}
}

void	order_4(t_node **stack_a, t_node **stack_b)
{
	push_lower_number(stack_a, stack_b);
	order_3(stack_a);
	pa(stack_a, stack_b, 1);
}

void	order_5(t_node **stack_a, t_node **stack_b)
{
	push_lower_number2(stack_a, stack_b);
	order_3(stack_a);
	pa(stack_a, stack_b, 1);
	pa(stack_a, stack_b, 1);
}
