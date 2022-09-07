/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:14:29 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/05 21:13:30 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_neg(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static	int	ft_nlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*esp;
	int		n2;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nlen(n);
	esp = ft_calloc(sizeof(char), len + 1);
	if (!esp)
		return (0);
	n2 = ft_neg(n);
	while (len--)
	{
		esp[len] = n2 % 10 + '0';
		n2 /= 10;
	}
	if (n < 0)
		esp[0] = '-';
	return (esp);
}
/* int	main()
{
	printf("********* itoa **********\n");
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(1234));
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(-2147483648));
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(0));
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(-1234));
	printf("---------------------------\n");
	printf("ft_itoa = %s\n", ft_itoa(42));
	printf("---------------------------\n");
	return (0);	
} */