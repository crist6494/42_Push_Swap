/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:53:44 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/21 17:06:04 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int pos)
{
	if (pos >= 'A' && pos <= 'Z')
		return (pos + 32);
	return (pos);
}
/*#include <stdio.h>
int	main()
{
	char	a = 'G';
	printf("%c", ft_tolower(a));
}*/
