/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpre.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:59:53 by sphone            #+#    #+#             */
/*   Updated: 2020/02/20 15:09:18 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int     simile(int x1, int x2, int y1, int y2)
{
    int i;

    i = 1;
    //printf("%d\n\nx1 = %d x2 = %d\n\n y1 = %d y2 = %d\n\n",i , x1, x2, y1, y2);
    i++;
        if (y1 == y2)
        {
            printf("\ny == 1 - %d 2 - %d\n", x1, x2);
            if (x1 == x2)
            {
                printf("\nx == 1 - %d 2 - %d\n", x1, x2);
                return (0);

            }
            if (x1 < x2)
            {
                //printf("\nx < 1 - %d 2 - %d\n", x1, x2);
                return (2);
            }
            else
            {
                //printf("\nx > 1 - %d 2 - %d\n", x1, x2);
                return (1);
            }
        }
        if (y1 < y2)
            return (2);
        else
            return (1);
}

int		test(int *temp, int *pole, int i)
{
	int x1;
	int y1;
	int x2;
	int y2;

	x1 = temp[i];
	x2 = pole[i];
	y1 = temp[i + 1];
	y2 = pole[i + 1];
	return (simile(x1, x2, y1, y2));
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
