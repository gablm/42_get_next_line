/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:22:08 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/19 19:54:24 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int fd = open(argv[argc - 1], O_RDONLY);
	char *a = get_next_line(fd);
	char *b = get_next_line(fd);
	printf("%s\n%s", a, b);
	return 0;
}