/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:49:03 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

long long		*sec_gen(long long *seq, int i, int j, long long *sec)
{
	int	quantity;
	int	s;

	s = 1;
	quantity = sec[0] + i;
	while (s > 0)
	{
		s = get_num(sec[0]);
		if (s > 2)
		{
			j += (seq[0] / (s / sec[0]));
			seq[0] = seq[0] % (s / sec[0]);
			j = more(sec, seq, i, j);
			i++;
		}
		if (s == 2)
		{
			fine(sec, seq, i, j);
			s = 0;
		}
	}
	return (seq);
}

long long		*presec(int qua, long long *seq)
{
	long long	*sec;
	int	i;
	int	x;
	int	j;

	sec = NULL;
	sec = sequencecreate(qua);
	i = 1;
	j = 1;
	x = seq[0];
	sec[0] = qua;
	seq = sec_gen(seq, i, j, sec);
	seq[0] = x + 1;
	free(sec);
	return (seq);
}

void	transposition(int **pole, int **figures, int qua, long long *seq)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 1;
	seq = presec(qua, seq);
	while (j < qua)
	{
		x = seq[j + 1];
		while (i < 8)
		{
			pole[j][i] = figures[x][i];
			i++;
		}
		i = 0;
		j++;
	}
	return ;
}
