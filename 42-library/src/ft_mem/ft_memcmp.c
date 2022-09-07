/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <cristian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:55:39 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/28 16:47:34 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			pos;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	pos = 0;
	while (pos < n)
	{
		if (st1[pos] != st2[pos])
			return (st1[pos] - st2[pos]);
		pos++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>

int main () {
   char s1[15];
   char s2[15];
   int ret;

   memcpy(s1, "ABCDEF", 6);
   memcpy(s2, "ABCDEF", 6);

   ret = ft_memcmp(s1, s2, 6);

   if(ret > 0) {
      printf("s2 es menor a s1");
   } else if(ret < 0) {
      printf("s1 es menor a s2");
   } else {
      printf("s1 es igual a s2");
   }
   return(0);
} */
