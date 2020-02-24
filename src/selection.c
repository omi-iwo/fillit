/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:29:27 by sphone            #+#    #+#             */
/*   Updated: 2020/02/24 06:27:34 by olegolszewski    ###   ########.fr       */
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

void		size(int qua, int *seq, int **figures)
{
	int size;
	int i;

	size = insize(qua);
	i = sizer(figures, qua);
	if (size < i)
		size = i;
	seq[1] = size;
	return ;
}

void	fullcopy(int **pole, int **figures, int qua)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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

void	selection(char *test, int qua)
{
	int	**figures;
	int	**pole;
	int *seq;

	figures = NULL;
	seq = NULL;
	pole = NULL;
	if (!(figures = createplace(qua)))
		errors(1);
	place(test, figures);
	preshift(figures, qua);
	if (!(pole = createplace(qua)))
		errors(1);
	if (!(seq = sequencecreate()))
		errors(1);
	fullcopy(pole, figures, qua);
	size(qua, seq, figures);
	assembly(pole, figures, qua, seq);
	ready(pole, seq);
	freeall(pole, figures, qua, seq);
	return ;
}
