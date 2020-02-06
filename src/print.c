/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:25:24 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		print(char **ab, int k)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < k)
	{
		while (j < k)
		{
			c = ab[i][j];
			write(1, &c, 1);
			j++;
		}
		c = '\n';
		write(1, &c, 1);
		i++;
		j = 0;
	}
	return ;
}
