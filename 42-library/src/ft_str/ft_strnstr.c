/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:54:29 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/11 19:21:01 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] && i <= n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && j + i < n)
			j++;
		if (j == ft_strlen(s2))
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}

/*   #include <stdio.h>
  #include <string.h>
int main()
{
	char dst[50] = "holaquee";
	char src[50] = "q";
	printf("%s\n", ft_strnstr(dst, src, 5));
	printf("%s\n", ft_strnstr("abcdefgh", "abc",2));
}  */