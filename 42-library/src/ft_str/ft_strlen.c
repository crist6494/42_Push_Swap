/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:10:59 by cmorales          #+#    #+#             */
/*   Updated: 2022/02/17 19:19:41 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*str)
{
	int	pos;	

	pos = 0;
	while (str[pos] != '\0')
	{
		pos++;
	}
	return (pos);
}
/*#include <stdio.h>
int main()
{
	char	*c = "Hola";
	printf("%d", ft_strlen(c));
	return(0);
}*/
