/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <cmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:53:25 by cmorales          #+#    #+#             */
/*   Updated: 2022/04/21 17:04:08 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int pos)
{
	if (pos >= 'a' && pos <= 'z')
		return (pos - 32);
	return (pos);
}
/*#include <stdio.h>
int	main()
{
	char	a = 'a';
	printf("%c", ft_toupper(a));
}*/
