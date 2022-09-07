/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <cristian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:32:01 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/28 16:48:25 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select(char const *str, va_list alist, int tc)
{
	if (*str == 'c')
	{
		ft_putchar_fd(va_arg(alist, int), 1);
		tc++;
	}
	else if (*str == 's')
		tc = ft_putstr_fd(va_arg(alist, char *), 1, tc);
	else if (*str == 'p')
		tc = void_hexa(va_arg(alist, unsigned long), tc, 1);
	else if (*str == 'd' || *str == 'i')
		tc = ft_putnbr_fd(va_arg(alist, int), 1, tc);
	else if (*str == 'u')
		tc = check_decimal(va_arg(alist, unsigned int), tc);
	else if (*str == 'x')
		tc = check_lower_hexa(va_arg(alist, unsigned int), tc);
	else if (*str == 'X')
		tc = check_upper_hexa(va_arg(alist, unsigned int), tc);
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		tc++;
	}
	return (tc);
}

int	ft_printf(char const *str, ...)
{
	int		tc;
	int		pos;
	va_list	alist;

	pos = 0;
	tc = 0;
	va_start(alist, str);
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			if ((ft_strchr("cspdiuxX%", str[pos + 1])))
				tc = ft_select(&str[pos++ + 1], alist, tc);
		}
		else
		{
			ft_putchar_fd(str[pos], 1);
			tc++;
		}
		pos++;
	}
	va_end (alist);
	return (tc);
}