/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:51:21 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/19 12:51:39 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int pos)
{
	if ((pos >= 'a' && pos <= 'z') || (pos >= 'A' && pos <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main()	
{
	char	a = 'a';
	printf("%d", ft_isalpha(a));
}*/
