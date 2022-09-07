/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:08:49 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 14:56:30 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	r;
	int	word;

	r = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[r])
	{
		while (s[r] && s[r] == c)
			r++;
		if (s[r] && s[r] != c)
			word++;
		while (s[r] && s[r] != c)
			r++;
	}
	return (word);
}

static int	ft_lenword(char const *s, char c, int i)
{
	int	f;

	f = i;
	if (!s)
		return (0);
	while (s[f] && s[f] != c)
		f++;
	return (f - i);
}

static	char	*ft_divword(char const *s, char c, int idx)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = ft_lenword(s, c, idx);
	if (!s)
		return (0);
	word = (char *) malloc ((j + 1) * sizeof(char));
	if (!word)
	{
		free(word);
		return (0);
	}
	while (s[idx] != '\0' && i < j)
	{
		word[i] = s[idx];
		i++;
		idx++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_bucle(char const *s, char c, char **esp)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			esp[i] = ft_divword(s, c, j);
			i++;
		}
		while (s[j] && s[j] != c)
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**esp;

	if (!s)
		return (0);
	esp = (char **) ft_calloc((ft_countwords(s, c) + 1), sizeof(char *));
	if (!esp)
	{
		free(esp);
		return (0);
	}
	ft_bucle(s, c, esp);
	return (esp);
}
/* #include<string.h>
int	main()
{
	char **res;
	  res = ft_split("aaa---aaa---",'-');
    printf("%d\n", strcmp(res[0],"aaa") == 0);
    printf("%d\n", strcmp(res[1],"aaa") == 0);
    printf("%d\n", res[2] == NULL);
} */
