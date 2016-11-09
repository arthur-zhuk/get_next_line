/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 08:41:24 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/11 10:57:13 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[i]))
		i++;
	while (ft_iswhitespace(s[len]))
		len--;
	if (i > len)
		len = i;
	return (ft_strsub(s, i, len - i + 1));
}
