/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:10:12 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/03 18:31:54 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	c, size_t	n)
{
	void	*rest;

	rest = 0;
	if ((c == __SIZE_MAX__ && n > 1)
		|| (n == __SIZE_MAX__ && c > 1))
		return (0);
	rest = (void *)malloc(c * n);
	if (!rest)
		return (0);
	ft_bzero(rest, (c * n));
	return (rest);
}
/*  #include <stdio.h>
int main()
{
   long *buffer;

   buffer = (long *)ft_calloc( 40, sizeof( long ) );
   if( buffer != NULL )
      printf( "Almacena 40 espacios\n" );
   else
      printf( "No puede almacenar menoria\n" );
   free( buffer );
}
 */
