/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:53:12 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/23 12:57:18 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	auxdest;
	size_t	auxsrc;

	d = 0;
	s = 0;
	auxdest = ft_strlen(dest);
	auxsrc = ft_strlen(src);
	while (dest[d] != '\0')
		d++;
	if (size == 0 || size <= auxdest)
		return (auxsrc + size);
	while (src[s] != '\0' && s < (size - auxdest - 1))
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (auxsrc + auxdest);
}

/* #include <stdio.h>
int	main()
{
	int o;
	char a[50] = "que tal";

	o = ft_strlcat (a, "estas", 2);	
	printf("%d\n", o);
} */
