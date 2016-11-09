/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 11:00:30 by azhuk             #+#    #+#             */
/*   Updated: 2016/11/07 18:55:05 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		*arr;
	int		i;
	int		j;

	i = 0;
	if (min >= max)
		return (0);
	j = max - min;
	arr = (int*)malloc(sizeof(int) * j);
	while (i < j)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
