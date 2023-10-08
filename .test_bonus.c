/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:22:08 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/31 18:37:35 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

#include <stdio.h>

void	test(char *a, int fd)
{
	while (a)
	{
		write(1, a, ft_strlen(a));
		free(a);
		a = get_next_line(fd);
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	*a;
	char	*b;

	fd = open(argv[argc - 1], O_RDONLY);
	fd2 = open(argv[argc - 2], O_RDONLY);
	a = get_next_line(fd);
	b = get_next_line(fd2);
	while (a && b)
	{
		write(1, a, ft_strlen(a));
		free(a);
		a = get_next_line(fd);
		write(1, b, ft_strlen(b));
		free(b);
		b = get_next_line(fd2);
	}
	test(a, fd);
	test(b, fd2);
	return (0);
}
