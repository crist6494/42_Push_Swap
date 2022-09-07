/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:57:50 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/04 16:52:11 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (0);
}
/*int main () 
{
   const char *s = "Hola que tal";
   int c = 'w';
   char *ret;
   ret = ft_strchr(s, c);
   printf("Cadena despues de |%c| es - |%s|\n", c, ret);
   return(0);
}*/
