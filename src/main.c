/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:33:42 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/07 16:55:16 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printstack(t_node *stack_a, t_node *stack_b)
{
	int	a;
	int	b;

	while (stack_a || stack_b)
	{
		if (stack_a)
		{
			if (stack_a)
				a = stack_a->value;
			stack_a = stack_a->nxt;
		}
		else
			a = 0;
		if (stack_b)
		{
			if (stack_b)
				b = stack_b->value;
			stack_b = stack_b->nxt;
		}
		else
			b = 0;
		printf("%d     %d \n", a, b);
	}
	printf("---------\nA     B \n\n");
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = malloc(sizeof(t_node));
	stack_b = malloc(sizeof(t_node));
	if (!stack_a)
		return (0);
	if (!stack_b)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
		check_errors(argv, argc);
	parser (&stack_a, argv, argc);
	get_min_value(&stack_a);
	order_sort(&stack_a, &stack_b, len_stack(stack_a));
	clear_elements (&stack_a, &stack_b);
	return (0);
}
