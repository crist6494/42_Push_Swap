/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:19:04 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 18:48:56 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	run_stack_minus_1(t_node **stack)
{
	t_node	*tmp;

	tmp = (*stack);
	while (tmp)
	{
		if (tmp->fixed == -1)
			return (0);
		tmp = tmp->nxt;
	}
	return (1);
}

void	get_min_value(t_node **stack)
{
	int		index;
	t_node	*tmp;
	t_node	*min;

	index = 0;
	while (!run_stack_minus_1(stack))
	{
		tmp = (*stack);
		min = NULL;
		while (tmp)
		{
			if (tmp->fixed == -1)
			{	
				if (!min)
					min = tmp;
				else if (tmp->value <= min->value)
					min = tmp;
			}
			tmp = tmp->nxt;
		}
		min->fixed = index;
		index++;
	}
}

void	push_lower_number(t_node **stack_a, t_node **stack_b)
{
	while ((*stack_a)->nxt)
	{
		if ((*stack_a)->fixed == 0)
		{
			pb(stack_a, stack_b, 1);
			break ;
		}
		else
			ra(stack_a, 1);
	}
}

void	push_lower_number2(t_node **stack_a, t_node **stack_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*stack_a)->fixed == i)
		{
			pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}
}

int	len_stack(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->nxt;
		i++;
	}
	return (i);
}
