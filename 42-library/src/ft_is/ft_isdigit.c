/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:35 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/19 13:36:07 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int pos)
{
	if (pos >= '0' && pos <= '9')
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
int	 main()
{
	char	c = 'a';
	char	b = '1';
	printf ("%d", ft_isdigit(c));
	printf ("\n");
	printf ("%d", ft_isdigit(b));
} */