/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:22:37 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/06 19:19:41 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../42-library/libft.h"
# include <stddef.h>

/*List*/
typedef struct t_node
{
	int				value;
	int				fixed;
	struct t_node	*prv;
	struct t_node	*nxt;
}t_node;

/*Main*/
int		main(int argc, char **argv);

/*Init and checker*/
void	add_bottom(t_node **stack_a, t_node *new);
void	init_stack(t_node **stack_a, int number);
void	create_new_element(char	*a, t_node **stack);
void	clear_elements(t_node **stack_a, t_node **stack_b);
void	printstack(t_node *stack_a, t_node *stack_b);
int		checknumber(char *num);
int		checkduplicate(char **num);
int		checkmaxnumber(char *num);
int		check_errors(char **num, int total_arg);
int		check_errors2(char **num);
t_node	*new_element(int value, t_node *nxt);
int		have_space(char *a);
void	parser(t_node **stack, char **args, int total_arg);

/*Operations*/

void	sa(t_node **stack_a, int print);
void	sb(t_node **stack_b, int print);
void	ss(t_node **stack_a, t_node **stack_b, int print);
void	pa(t_node **stack_a, t_node **stack_b, int print);
void	pb(t_node **stack_a, t_node **stack_b, int print);
void	ra(t_node **stack_a, int print);
void	rb(t_node **stack_b, int print);
void	rr(t_node **stack_a, t_node **stack_b, int print);
void	rra(t_node **stack_a, int print);
void	rrb(t_node **stack_b, int print);
void	rrr(t_node **stack_a, t_node **stack_b, int print);

/*Orders*/
void	order_2(t_node **a);
void	order_3(t_node **stack_a);
void	order_4(t_node **stack_a, t_node**stack_b);
void	order_5(t_node **stack_a, t_node **stack_b);
void	order_sort_5(t_node **stack_a, t_node **stack_b, int argc);
void	radix(t_node **stack_a, t_node **stack_b);
void	order_sort(t_node **stack_a, t_node **stack_b, int total_arg);

/*Utils*/
int		len_stack(t_node *stack);
int		get_max_bits(t_node **stack);
int		is_sorted(t_node *stack);
int		run_stack_minus_1(t_node **stack);
void	get_min_value(t_node **stack);
void	push_lower_number2(t_node **stack_a, t_node **stack_b);
void	push_lower_number(t_node **stack_a, t_node **stack_b);
void	exit_error(void);

/*Checker*/
void	ft_operations(char *line, t_node **stack_a, t_node **stack_b);
void	ft_operations_2(char *line, t_node **stack_a, t_node **stack_b);
int		ft_strcmp(char *stack_a, char *stack_b);
void	ft_check(t_node *stack_a, t_node *stack_b);

#endif
