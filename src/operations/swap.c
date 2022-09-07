/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:18:25 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 18:43:49 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*This is for the operations sa,sb,sss*/

void	sa(t_node **stack_a, int print)
{
	int	aux;

	if (!stack_a)
		return ;
	if ((*stack_a) && (*stack_a)->nxt)
	{
		aux = (*stack_a)->value;
		(*stack_a)->value = (*stack_a)->nxt->value;
		(*stack_a)->nxt->value = aux;
	}
	if (print)
		ft_printf("sa\n");
}

void	sb(t_node **stack_b, int print)
{
	int	aux;

	if (!stack_b)
		return ;
	if ((*stack_b) && (*stack_b)->nxt)
	{
		aux = (*stack_b)->value;
		(*stack_b)->value = (*stack_b)->nxt->value;
		(*stack_b)->nxt->value = aux;
	}
	if (print)
		ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b, int print)
{
	if (!stack_a && !stack_b)
		return ;
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (print)
		ft_printf("ss\n");
}
