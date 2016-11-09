/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 11:37:31 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/01 20:41:42 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*cur1;
	char	*cur2;

	cur1 = dest;
	cur2 = (char *)src;
	while (*cur1 != '\0')
		cur1++;
	while (*cur2 != '\0')
		*cur1++ = *cur2++;
	*cur1 = '\0';
	return (dest);
}
