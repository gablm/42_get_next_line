/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:19:20 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/31 15:03:09 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	content[BUFFER_SIZE];
	char		*res;

	res = NULL;
	if (ft_strlen(content) > 0)
	{
		res = strdup_tilln(content);
		strcpy_fromn(content);
		if (ft_strchr(res, '\n'))
			return (res);
	}
	while (read(fd, content, BUFFER_SIZE) > 0)
	{
		res = ft_strjoin(res, strdup_tilln(content));
		strcpy_fromn(content);
		if (ft_strchr(res, '\n'))
			return (res);
	}
	if (!read(fd, content, BUFFER_SIZE) && ft_strlen(content))
	{
		content[0] = 0;
		return (res);
	}
	return (NULL);
}
