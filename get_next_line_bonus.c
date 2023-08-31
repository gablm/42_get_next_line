/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:19:20 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/31 18:35:08 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	content[MAX_FILES_OPENED][BUFFER_SIZE];
	char		*res;

	if (fd < 0)
		return (NULL);
	res = NULL;
	if (content[fd][0])
	{
		res = strdup_tilln(content[fd]);
		strcpy_fromn(content[fd]);
		if (ft_strchr(res, '\n'))
			return (res);
	}
	while (read(fd, content[fd], BUFFER_SIZE) > 0)
	{
		res = ft_strjoin(res, strdup_tilln(content[fd]));
		strcpy_fromn(content[fd]);
		if (ft_strchr(res, '\n'))
			return (res);
	}
	if (!read(fd, content[fd], BUFFER_SIZE) && content[fd][0])
		content[fd][0] = 0;
	return (res);
}
