/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 12:59:40 by azhuk             #+#    #+#             */
/*   Updated: 2016/11/09 13:21:24 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4
# define EOL '\n'

# include "./libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>

typedef struct			s_line
{
	int					fd;
	char				*line;
	struct s_line		*next;
}						t_line;

int						get_next_line(const int fd, char **line);

#endif
