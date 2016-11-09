/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 17:38:53 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/20 13:41:31 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str || !c)
		return (0);
	while (str[i])
	{
		if ((i == 0 && str[i] != c) || (str[i - 1] == c && str[i] != c))
			j++;
		i++;
	}
	return (j);
}

static char		*ft_trim(char const *s, char c)
{
	int		i;
	char	*res;

	i = 0;
	while (s[i] != c)
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		w;
	char	**spl;

	i = 0;
	if (!s || !c)
		return (NULL);
	w = ft_wordcount((char *)s, c);
	spl = (char **)malloc(sizeof(char *) * (w + 1));
	if (!spl)
		return (NULL);
	w = 0;
	while (*s)
	{
		if ((i == 0 && *s != c) || (*s != c && s[-1] == c))
			spl[w++] = ft_trim(s, c);
		i++;
		s++;
	}
	spl[w] = NULL;
	return (spl);
}
