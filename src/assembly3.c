/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assembly3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:05:53 by sphone            #+#    #+#             */
/*   Updated: 2020/02/09 02:06:10 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		testinside3(int **p, int j, int x)
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

void	assembly3(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;
	int	size;
	int	x;

	x = 0;
	i = 1;
	size = sequence[quantity + 1];
	while (i < quantity)
	{
		while (testinside3(pole, i, x) != 0)
		{
			if (shiftpole(pole[i], size, figures[sequence[i + 1]]) != 0)
			{
				if ((presoft3(pole, figures, quantity, sequence)) == 1)
					return ;
				i = 1;
			}
		}
		i++;
	}
	return ;
}
