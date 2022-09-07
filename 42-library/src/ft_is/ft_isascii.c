/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:00:56 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/19 14:33:06 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int pos)
{
	if (pos >= 0 && pos <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	 main()
{
	char	c = '~';
	char	b = 'ñ';
	printf ("%d", ft_isascii(c));
	printf ("\n");
	printf ("%d", ft_isascii(b));
}*/
