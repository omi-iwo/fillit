/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prer.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:53:34 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 02:48:51 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			copyseq(long long *set, long long *seq, int qua)
{
	int			i;

	i = 0;
	while (i < qua + 2)
	{
		seq[i] = set[i];
		i++;
	}
	return ;
}

void			clone(int **temp, int **pole, int qua)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (i < qua)
	{
		while (j < 8)
		{
			temp[i][j] = pole[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return ;
}

void			prer(int **pole, int **figures, int qua, long long *seq)
{
	int			**temp;
	long long	*set;

	set = sequencecreate(qua);
	size(qua, seq, figures);
	assembly(pole, figures, qua, seq);
	temp = createplace(figures, qua);
	copyseq(seq, set, qua);
	clone(temp, pole, qua);
	if (set[0] < (get_num(qua) / qua))
	{
		tr(temp, figures, qua, set);
		if (assembly2(temp, figures, qua, set) == 0)
		{
			set[0] = qua;
			if (testpre(pole, temp, set, seq) == 1)
				copyseq(set, seq, qua);
		}
	}
	free(set);
	freefigures(temp, qua);
	return ;
}
