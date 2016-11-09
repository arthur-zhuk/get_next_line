/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 07:47:09 by azhuk             #+#    #+#             */
/*   Updated: 2016/09/28 20:55:56 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	chr;
	unsigned char	*ptr1;

	i = 0;
	chr = (unsigned char)c;
	ptr1 = (unsigned char *)str;
	while (n--)
	{
		if (ptr1[i] == chr)
			return (ptr1 + i);
		i++;
	}
	return (NULL);
}
