/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fine.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:27:24 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		superfine(long long *sec, int j, int x, int qua)
{
	if (x == 0)
	{
		while (sec[j] < 0)
		{
			j++;
			if (j == qua + 1)
				j = 1;
		}
		j++;
		if (j == qua + 1)
			j = 1;
	}
	else
	{
		while (sec[j] < 0)
		{
			j++;
			if (j == qua + 1)
				j = 1;
		}
	}
	return (j);
}

int		plusfine(long long *seq, long long *sec, int i, int j)
{
	seq[i] = sec[j];
	sec[j] = -1;
	i++;
	return (i);
}

void	fine(long long *sec, long long *seq, int i, int j)
{
	int	quantity;
	int	x;

	quantity = sec[0] + i - 1;
	if (seq[0] == 1)
	{
		x = 0;
		j = superfine(sec, j, x, quantity);
		x = 1;
		j = superfine(sec, j, x, quantity);
		i = plusfine(seq, sec, i, j);
		j = superfine(sec, j, x, quantity);
		seq[i] = sec[j];
	}
	else
	{
		x = 1;
		j = superfine(sec, j, x, quantity);
		i = plusfine(seq, sec, i, j);
		j = superfine(sec, j, x, quantity);
		seq[i] = sec[j];
	}
	return ;
}
