/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 11:01:35 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/12 10:38:36 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		*array;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	j = max - min;
	if (!(array = (int*)malloc(sizeof(*array) * j)))
	{
		*range = 0;
		return (0);
	}
	while (i < j)
	{
		array[i] = i + min;
		i++;
	}
	*range = array;
	return (max - min);
}
