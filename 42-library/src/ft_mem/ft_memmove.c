/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:52:04 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/03 19:02:36 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	pos;

	pos = 0;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (pos < n)
		{
		*(char *)(dst + pos) = *(char *)(src + pos);
		pos++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(char *)(dst + n - 1) = *(char *)(src + n - 1);
			n--;
		}
	}
	return (dst);
}
/* #include <stdio.h>
int main()
{
	char dst[50] = "Hola buenos dias";
	char src[50] = "adios ";
	printf("%s\n", ft_memmove(dst, src, 5));
}
 */