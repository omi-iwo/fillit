/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preshiftback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 19:54:33 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:42:28 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shiftback(int *figure, int i, int x, int y)
{
	int	size;

	size = x;
	x = 0;
	while (i < 8)
	{
		if (figure[i] > x)
			x = figure[i];
		if (figure[++i] > y)
			y = figure[i];
		i++;
	}
	i = 0;
	while (i < 8)
	{
		figure[i++] += (size - x);
		figure[i++] += (size - y);
	}
	return ;
}

void	preshiftback(int **figures, int quantity, int size)
{
	int	i;
	int	j;
	int	x;
	int	y;

	j = 1;
	while (j < quantity)
	{
		i = 0;
		x = size;
		y = 0;
		shiftback(figures[j], i, x, y);
		j++;
	}
	return ;
}
