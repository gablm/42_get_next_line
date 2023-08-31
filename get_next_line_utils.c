/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:19:17 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/31 15:00:44 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*strdup_tilln(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i] && str[i] != '\n' && str[i] != -1)
		i++;
	if (str[i] == '\n')
		i++;
	res = (char *)malloc(sizeof(char) * i + 1);
	res[i] = 0;
	while (i-- > 0)
		res[i] = str[i];
	return (res);
}

void	strcpy_fromn(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] && str[i] != '\n' && str[i] != -1)
		i++;
	if (str[i] == '\n')
		i++;
	else
		return ;
	j = 0;
	while (str[i])
		str[j++] = str[i++];
	str[j] = 0;
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		h;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	i = 0;
	h = 0;
	while (h < (int)ft_strlen(s1))
		res[i++] = s1[h++];
	h = 0;
	while (h < (int)ft_strlen(s2))
		res[i++] = s2[h++];
	res[i] = 0;
	free(s2);
	free(s1);
	return (res);
}
