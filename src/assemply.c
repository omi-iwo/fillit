/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:34:55 by sphone            #+#    #+#             */
/*   Updated: 2020/02/05 08:04:17 by olegolszewski    ###   ########.fr       */
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

int		insize(int quantity)
{
	int	i;
	int a;

	i = 4 * quantity;
	a = 1;
	while ((a * a) < i)
	{
		a++;
	}
	return (--a);
}

int		sizer(int **figures, int quantity)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (j < quantity)
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

int		sizein(int quantity, int *sequence, int **figures)
{
	int size;
	int i;

	size = insize(quantity);
	i = sizer(figures, quantity);
	if (size < i)
		size = i;
	sequence[quantity + 1] = size;
	return (size);
}

void		assembly(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;
	int	size;
	int	x;

	i = 1;
	x = 0;
	size = sizein(quantity, sequence, figures);
	while (i < quantity)
	{
		while (testinside(pole, i, x) != 0)
		{
			if (shiftpole(pole[i], size, figures[sequence[i + 1]]) != 0)
			{
				if ((x = presoft(pole, figures, quantity, sequence)) == 1)
					sequence[quantity + 1] = ++size;
				if (x == 2)
					return ;
				i = 1;
			}
		}
		i++;
	}
	return ;
}
