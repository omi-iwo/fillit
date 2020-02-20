/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olegolszewski <olegolszewski@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 01:45:34 by olegolszewski     #+#    #+#             */
/*   Updated: 2020/02/20 15:01:15 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		insize(int qua)
{
	int	i;
	int a;

	i = 4 * qua;
	a = 1;
	while ((a * a) < i)
	{
		a++;
	}
	return (--a);
}

int		sizer(int **figures, int qua)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (j < qua)
	{
		while (i < 8)
		{
			if (figures[j][i] > x)
				x = figures[j][i];
			i++;
		}
		j++;
		i = 0;
	}
	return (x);
}

void		size(int qua, long long *seq, int **figures)
{
	int size;
	int i;

	size = insize(qua);
	i = sizer(figures, qua);
	if (size < i)
		size = i;
	seq[qua + 1] = size;
	return ;
}

