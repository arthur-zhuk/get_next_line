/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 18:13:35 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/15 16:56:56 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*ptrdest;
	const char	*ptrsrc;
	size_t		n;
	size_t		dlen;

	ptrdest = dest;
	ptrsrc = src;
	n = size;
	while (n-- != 0 && *ptrdest != '\0')
		ptrdest++;
	dlen = ptrdest - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(ptrsrc));
	while (*ptrsrc)
	{
		if (n != 1)
		{
			*ptrdest++ = *ptrsrc;
			n--;
		}
		ptrsrc++;
	}
	*ptrdest = '\0';
	return (dlen + (ptrsrc - src));
}
