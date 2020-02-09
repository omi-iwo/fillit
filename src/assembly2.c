/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assembly2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:04:23 by sphone            #+#    #+#             */
/*   Updated: 2020/02/09 02:05:12 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		testinside2(int **p, int j, int x)
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

int		assembly2(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;
	int	size;
	int	x;

	i = 1;
	x = 0;
	size = sequence[quantity + 1];
	while (i < quantity)
	{
		while (testinside2(pole, i, x) != 0)
		{
			if (shiftpole(pole[i], size, figures[sequence[i + 1]]) != 0)
			{
				if ((x = presoft2(pole, figures, quantity, sequence)) == 1)
					return (1);
				if (x == 2)
					return (0);
				i = 1;
			}
		}
		i++;
	}
	return (0);
}
