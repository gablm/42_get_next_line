/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:15:25 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/19 19:54:03 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);

void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strnjoin(char const *s1, char const *s2, size_t len);
char	*ft_strdup(const char *s);

#endif