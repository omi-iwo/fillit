/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/20 23:54:06 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	loco(int **pole, int **figures, int qua)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < qua)
	{
		while (i < 8)
		{
			pole[j][i] = figures[j][i];
			i++;
		}
		i = 0;
		j++;
	}
	return ;
}

void	prepre(long long *seq, int qua)
{
	int	i;

	i = 0;
	seq[i++] = 1;
	while (i < qua + 1)
	{
		seq[i] = i - 1;
		i++;
	}
	return ;
}

int		presoft(int **pole, int **figures, int qua, long long *seq)
{
	int	i;
	int size;

	size = seq[qua + 1];
	i = 0;
	if (seq[0] < get_num(qua - 1))
		tr(pole, figures, qua, seq);
	else
	{
		if (shiftpole(pole[0], size, figures[seq[i + 1]]) != 0)
		{
			soft(pole, figures, qua);
			seq[i] = 1;
			while (++i < qua + 1)
				seq[i] = i - 1;
			return (1);
		}
		else
		{
			prepre(seq, qua);
			loco(pole, figures, qua);
		}
	}
	return (0);
}
