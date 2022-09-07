/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:46:36 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/05 20:52:17 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	pos;
	char	*s2;

	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
		return (0);
	pos = 0;
	while (s1[pos])
	{
		s2[pos] = s1[pos];
		pos++;
	}
	s2[pos] = '\0';
	return (s2);
}
/* #include<stdio.h>
#include<string.h>
 
int main()
{
   char	s1 [20] = "Hola buenas tardes";
   char	*s2;
   s2 = strdup (s1);
   printf("%s", s1);
   printf("\n");
   printf("%s", s2);
} */