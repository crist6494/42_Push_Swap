/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:31:32 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/27 20:31:59 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = 0;
	while (s[pos])
		pos++;
	while (pos >= 0)
	{
		if (s[pos] == (char)c)
		{
			return (&((char *)s)[pos]);
		}
		else
			pos--;
	}
	return (0);
}
/* int main ()
{
   const char *s = "Hola que tal";
   int c = 'a';
   char *ret;

   ret = ft_strrchr(s, c);

   printf("Cadena despues de |%c| es - |%s|\n", c, ret);
   return(0);
} */
