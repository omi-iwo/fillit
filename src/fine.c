/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fine.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:27:24 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		superfine(int *sec, int j, int x, int quantity)
{
	if (x == 0)
	{
		while (sec[j] < 0)
		{
			j++;
			if (j == quantity + 1)
				j = 1;
		}
		j++;
		if (j == quantity + 1)
			j = 1;
	}
	else
	{
		while (sec[j] < 0)
		{
			j++;
			if (j == quantity + 1)
				j = 1;
		}
	}
	return (j);
}

int		plusfine(int *sequence, int *sec, int i, int j)
{
	sequence[i] = sec[j];
	sec[j] = -1;
	i++;
	return (i);
}

void	fine(int *sec, int *sequence, int i, int j)
{
	int	quantity;
	int	x;

	quantity = sec[0] + i - 1;
	if (sequence[0] == 1)
	{
		x = 0;
		j = superfine(sec, j, x, quantity);
		x = 1;
		j = superfine(sec, j, x, quantity);
		i = plusfine(sequence, sec, i, j);
		j = superfine(sec, j, x, quantity);
		sequence[i] = sec[j];
	}
	else
	{
		x = 1;
		j = superfine(sec, j, x, quantity);
		i = plusfine(sequence, sec, i, j);
		j = superfine(sec, j, x, quantity);
		sequence[i] = sec[j];
	}
	return ;
}
