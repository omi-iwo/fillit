/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:34:55 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		testinsideback(int **p, int j, int x)
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

int		assemblyback(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;
	int	size;
	int	x;

	i = 1;
	size = sequence[quantity + 1];
	x = 0;
	preshiftback(pole, quantity, size);
	while (i < quantity)
	{
		while (testinsideback(pole, i, x) != 0)
		{
			if (shiftpoleback(pole[i], figures[sequence[i + 1]]) != 0)
			{
				if ((x = presoftback(pole, figures, quantity, sequence)) == 0)
					return (0);
				if (x == 2)
					return (1);
				preshiftback(pole, quantity, size);
				i = 1;
			}
		}

		i++;
	}
	return (1);
}
