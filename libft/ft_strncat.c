/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 17:58:26 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/15 11:04:10 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*cur1;
	char	*cur2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cur1 = dest;
	cur2 = (char *)src;
	while (cur1[i])
		i++;
	while (cur2[j] && n > 0)
	{
		cur1[i] = cur2[j];
		i++;
		j++;
		n--;
	}
	cur1[i] = '\0';
	return (cur1);
}
