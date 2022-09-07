/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:22:38 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/05 21:13:42 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	pos;
	size_t	len;
	char	*esp;

	pos = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	esp = (char *)malloc(sizeof(char) * len + 1);
	if (!esp)
		return (0);
	while (pos < len)
	{
		esp[pos] = f(pos, s[pos]);
		pos++;
	}
	esp[pos] = '\0';
	return (esp);
}
/* char	f(unsigned int i, char c)
{
	char	str;
	str = c + 3;
	return (str);
}
int	main()
{
	char	str[] = "bcd";
	printf("%s", ft_strmapi(str, *f));
} */