/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:34:55 by sphone            #+#    #+#             */
/*   Updated: 2020/02/29 12:01:01 by olegolszewski    ###   ########.fr       */
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

void	assembly(int **pole, int **figures, int qua, int *seq)
{
	int	x;

	x = 0;
	while (seq[0] < qua)
	{

		while (testinside(pole, seq[0], x) != 0)
		{
			if (shiftpole(pole[seq[0]], seq[1], figures[seq[0]]) != 0)
			{
				presoft(pole, figures, qua, seq);
			}
		}
		seq[0]++;
	}

	seq[0] = qua;
	return ;
}
