/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 08:10:06 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/12 09:27:43 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(long number)
{
	int		length;

	length = 1;
	if (number < 0)
	{
		length++;
		number = -number;
	}
	while (number >= 10)
	{
		number /= 10;
		length++;
	}
	return (length);
}
