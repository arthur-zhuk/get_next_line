/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:05:46 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/02 18:49:15 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*cur;

	if (n == 0)
		return (str);
	cur = (unsigned char *)str;
	while (n--)
	{
		*cur = (unsigned char)c;
		if (n)
			cur++;
	}
	return (str);
}
