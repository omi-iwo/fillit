/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpre.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:59:53 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 02:40:06 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		test(int *temp, int *pole, int i)
{
	int x1;
	int y1;
	int x2;
	int y2;

	i = 0;
	x1 = temp[i];
	x2 = pole[i];
	y1 = temp[i + 1];
	y2 = pole[i + 1];
	if (y1 < y2)
		return (2);
	if (x1 + y1 == x2 + y2)
		return (0);
	if (x1 + y1 < x2 + y2)
		return (2);
	else
		return (1);
}

int		testpreswap(int **pole, int **temp, int q)
{
	swapy(pole, temp, q);
	return (1);
}

int		testpre(int **pole, int **temp, long long *set, long long *seq)
{
	int i;
	int n;
	int q;

	i = 0;
	n = 0;
	q = set[0];
	while (n < q)
	{
		while (seq[i + 1] != n)
			i++;
		seq[0] = i;
		i = 0;
		while (set[i + 1] != n)
			i++;
		set[0] = i;
		if ((i = test(temp[seq[0]], pole[set[0]], i)) == 2)
			return (0);
		if (i == 1)
			return (testpreswap(pole, temp, q));
		n++;
		i = 0;
	}
	return (0);
}
