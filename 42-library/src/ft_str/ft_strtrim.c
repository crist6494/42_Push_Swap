/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:59:05 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/05 20:53:58 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	pos;

	pos = 0;
	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1 != 0)
		s1++;
	pos = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[pos]) && pos != 0)
		pos--;
	return (ft_substr((char *)s1, 0, pos + 1));
}
/* int main()
{
	printf("%s\n", ft_strtrim("qbcabqbc", "qbc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
} */