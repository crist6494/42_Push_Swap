/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:47:31 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 19:14:57 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted(t_node *stack)
{
	int	last;

	last = stack->value;
	while (stack->nxt)
	{
		if (stack->value > stack->nxt->value
			|| last > stack->value)
			return (0);
		last = stack->value;
		stack = stack->nxt;
	}
	return (1);
}

void	radix(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	int		i;
	int		j;
	int		size;

	i = 0;
	tmp = (*stack_a);
	size = len_stack(tmp);
	while (!(is_sorted(*stack_a)))
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *stack_a;
			if ((tmp->fixed >> i & 1) == 1)
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b, 1);
		}
		while (len_stack(*stack_b))
			pa(stack_a, stack_b, 1);
		i++;
	}
}

void	order_sort(t_node **stack_a, t_node **stack_b, int total_arg)
{
	if (is_sorted(*stack_a))
		return ;
	if (total_arg == 2)
		order_2(stack_a);
	else if (total_arg == 3)
		order_3(stack_a);
	else if (total_arg == 4)
		order_4(stack_a, stack_b);
	else if (total_arg == 5)
		order_5(stack_a, stack_b);
	else if (total_arg > 5)
		radix(stack_a, stack_b);
}
