/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tru.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:34:08 by sphone            #+#    #+#             */
/*   Updated: 2020/02/29 14:12:45 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*tru(int fd, char *tmp)
{
	char	buf;
	int		i;

	i = 0;
	tmp = (char*)malloc(sizeof(char) * (21 * 26 + 2));
	if (tmp == NULL)
		return (NULL);
	while (read(fd, &buf, 1))
	{
		if (i > 21 * 26)
			return (NULL);
		tmp[i] = buf;
		i++;
	}
	if (i == 0)
		return (NULL);
	if ((i + 1) % 21 != 0)
		return (NULL);
	if (tmp[i - 1] != '\n')
		return (NULL);
	tmp[i] = '\n';
	tmp[i + 1] = '\0';
	close(fd);
	return (tmp);
}
