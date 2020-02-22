/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preshift.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:10:27 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shift(int *figure, int i, int x, int y)
{
	while (i < 8)
	{
		if (figure[i] < x)
			x = figure[i];
		if (figure[++i] < y)
			y = figure[i];
		i++;
	}
	i = 0;
	while (i < 8)
	{
		figure[i++] -= x - 1;
		figure[i++] -= y - 1;
	}
	return ;
}

void	preshift(int **figures, int qua)
{
	int	i;
	int	j;
	int	x;
	int	y;

	j = 0;
	while (j < qua)
	{
		i = 0;
		x = 4;
		y = 4;
		shift(figures[j], i, x, y);
		j++;
	}
	return ;
}
