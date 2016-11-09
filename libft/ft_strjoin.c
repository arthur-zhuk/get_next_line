/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 07:14:04 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/03 17:52:34 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	char	*joined_str;

	if (!s1 || !s2)
		return (NULL);
	temp = ft_memalloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (NULL);
	joined_str = temp;
	while (*s1)
		*joined_str++ = *s1++;
	while (*s2)
		*joined_str++ = *s2++;
	*joined_str = '\0';
	return (temp);
}
