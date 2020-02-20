/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:34:55 by sphone            #+#    #+#             */
/*   Updated: 2020/02/20 22:19:52 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		testinside(int **p, int j, int x)
{
	int	i;
	int	k;

	x = 0;
	i = 0;
	k = 0;
	while (x < j)
	{
		while (i < 8)
		{
			while (k < 8)
			{
				if (p[x][k + 1] == p[j][i + 1] && p[x][k] == p[j][i])
					return (1);
				k += 2;
			}
			k = 0;
			i += 2;
		}
		x++;
		i = 0;
	}
	return (0);
}

void	assembly(int **pole, int **figures, int qua, long long *seq)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < qua)
	{
		while (testinside(pole, i, x) != 0)
		{
			if (shiftpole(pole[i], seq[qua + 1], figures[seq[i + 1]]) != 0)
			{
				if (presoft(pole, figures, qua, seq) == 1)
					seq[qua + 1] += 1;
				i = 1;
			}
		}
		i++;
	}
	return ;
}
