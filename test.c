/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:22:08 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/31 18:36:18 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*a;

	fd = open(argv[argc - 1], O_RDONLY);
	a = get_next_line(fd);
	while (a)
	{
		write(1, "->", 2);
		write(1, a, ft_strlen(a));
		free(a);
		write(1, "<-\n", 3);
		a = get_next_line(fd);
	}
	close(fd);
	return (0);
}
