/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tru.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:34:08 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:45:44 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*trutru(char *tmp, int i)
{
	if (tmp[i - 1] != '\n' || tmp[i - 2] == '\n')
		return (NULL);
	tmp[i++] = '\n';
	tmp[i] = '\0';
	return (tmp);
}

char		*tru(int fd, char *tmp)
{
	char	buf;
	int		fd_fd;
	int		i;

	tmp = NULL;
	fd_fd = read(fd, &buf, 1);
	if (fd_fd < 0)
		return (NULL);
	i = 0;
	if (fd_fd == 1)
	{
		tmp = (char*)malloc(sizeof(char) * 545);
		while (fd_fd != '\0')
		{
			tmp[i] = buf;
			i++;
			fd_fd = read(fd, &buf, 1);
		}
		if (!(trutru(tmp, i)))
			return (0);
	}
	close(fd);
	return (tmp);
}
