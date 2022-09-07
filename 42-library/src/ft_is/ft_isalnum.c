/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:52:40 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/05 19:19:03 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int pos)
{
	if (pos >= '0' && pos <= '9')
		return (1);
	else if ((pos >= 'a' && pos <= 'z') || (pos >= 'A' && pos <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	 main()
{
	char	c = 'a';
	char	b = '~';
	printf ("%d", ft_isalnum(c));
	printf ("\n");
	printf ("%d", ft_isalnum(b));
}*/
