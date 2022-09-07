/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:48:38 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/05 20:53:15 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	pos;
	char	*esp;

	if (!s1 || !s2)
		return (0);
	esp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!esp)
		return (0);
	pos = 0;
	while (*s1)
	{
		esp[pos] = *s1;
		pos++;
		s1++;
	}
	while (*s2)
	{
		esp[pos] = *s2;
		pos++;
		s2++;
	}
	esp[pos] = '\0';
	return (esp);
}
/* #include<stdio.h>
#include<string.h>
 
int main()
{
   char	s1 [20] = "Hola buenas tardes";
   char	s2 [20] = "que tal estas";
   char	*s3;
   s3 = ft_strjoin(s1,s2);
   printf("%s", s3);
} */
