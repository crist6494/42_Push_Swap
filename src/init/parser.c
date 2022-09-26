/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:24:26 by cmorales          #+#    #+#             */
/*   Updated: 2022/09/26 17:45:50 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	exit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	have_space(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (a[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int	strlen_(char **a)
{
	int	i;

	if (!a)
		return (0);
	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	parser(t_node **stack, char **args, int total_arg)
{
	int		index;
	int		i;
	char	**str;

	index = 1;
	while (index < total_arg)
	{
		if (have_space(args[index]))
		{
			str = ft_split(args[index], ' ');
			check_errors2(str);
			i = 0;
			while (i <= strlen_(str) - 1)
			{
				create_new_element(str[i], stack);
				free(str[i]);
				i++;
			}
			free(str);
		}
		else
		{
			str = &args[index];
			check_errors2(str);
			create_new_element(args[index], stack);
		}
		index++;
	}
}
