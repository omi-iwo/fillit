/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ready.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:45:25 by sphone            #+#    #+#             */
/*   Updated: 2020/02/29 12:01:01 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		ingo(int j)
{
	char	c;

	c = 'A';
	c = c + j;
	return (c);
}

char		**go(int **pole, char **forprint, int *seq)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = 0;
	j = 0;
	while (j < seq[0])
	{
		while (i < 8)
		{
			x = pole[j][i] - 1;
			y = pole[j][i + 1] - 1;
			forprint[y][x] = ingo(j);
			i += 2;
		}
		j++;
		i = 0;
	}
	return (forprint);
}

char		**instady(int i, int j, int size, char **forprint)
{
	while (i < size)
	{
		while (j < size)
		{
			forprint[i][j] = '.';
			j++;
		}
		forprint[i][j] = '\n';
		j = 0;
		i++;
	}
	return (forprint);
}

char		**stady(int size, char **forprint)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!(forprint = (char **)malloc(size * sizeof(char*))))
		errors(1);
	while (i < size)
	{
		if (!(forprint[i] = (char *)malloc((size + 1) * sizeof(char))))
			errors(1);
		i++;
	}
	i = 0;
	if (!(forprint = instady(i, j, size, forprint)))
		errors(1);
	return (forprint);
}

void		ready(int **pole, int *seq)
{
	int		i;
	char	**forprint;

	forprint = NULL;
	i = 0;
	if (!(forprint = stady(seq[1], forprint)))
		errors(1);
	if (!(forprint = go(pole, forprint, seq)))
		errors(1);
	print(forprint, seq[1]);
	while (i < seq[1])
	{
		free(forprint[i++]);
	}
	free(forprint);
	return ;
}
