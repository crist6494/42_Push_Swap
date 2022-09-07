/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:49:24 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/05 19:36:16 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	add_bottom(t_node **stack_a, t_node *new)
{
	t_node	*tmp;

	if (*stack_a == NULL)
		*stack_a = new;
	else
	{
		tmp = *(stack_a);
		while (tmp->nxt)
			tmp = tmp->nxt;
		tmp->nxt = new;
		new->prv = tmp;
	}
}

void	init_stack(t_node **stack_a, int number)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return ;
	tmp->fixed = -1;
	tmp->value = number;
	tmp->nxt = NULL;
	tmp->prv = NULL;
	add_bottom(stack_a, tmp);
	tmp = NULL;
}

void	create_new_element(char	*a, t_node **stack)
{
	int	tmp;

	if (!a || !a[0])
		exit_error();
	tmp = ft_atoi(a);
	if (tmp == -1 && a[0] != '-')
		exit_error();
	init_stack(stack, tmp);
}

void	clear_elements(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		while (*stack_a)
		{
			tmp = (*stack_a)->nxt;
			free(*stack_a);
			*stack_a = tmp;
		}	
	}
	if (*stack_b)
	{
		tmp = *stack_b;
		if (!tmp)
			return ;
		while (*stack_b)
		{
			tmp = (*stack_b)->nxt;
			free(*stack_b);
			*stack_b = tmp;
		}	
	}
}
