/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:44:17 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/12 10:36:14 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		pos;
	int		len;

	i = 0;
	pos = 0;
	len = 0;
	while (needle[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[pos] == haystack[i + pos])
		{
			if (pos == len - 1)
				return ((char *)&haystack[i]);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (NULL);
}
