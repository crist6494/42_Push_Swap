/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:25:08 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/04 17:47:09 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	i = start;
	j = 0;
	while (s[i] && j < len && (start < ft_strlen((char *)s)))
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
/* #include<stdio.h>
#include<string.h>
 
int main()
{
   char	s1 [20] = "Hola buenas tardes";
   char	*s2;
   s2 = ft_substr(s1,3,7);
   printf("%s", s1);
   printf("\n");
   printf("%s", s2);
} */