/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:49:03 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:45:28 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*sec_gen2(int *sequence, int i, int j, int *sec)
{
	int	quantity;
	int	s;

	s = 1;
	quantity = sec[0] + i;
	while (s > 0)
	{
		s = get_num(sec[0]);
		if (s > 2)
		{
			j += (sequence[0] / (s / sec[0]));
			sequence[0] = sequence[0] % (s / sec[0]);
			j = more(sec, sequence, i, j);
			i++;
		}
		if (s == 2)
		{
			fine(sec, sequence, i, j);
			s = 0;
		}
	}
	return (sequence);
}

int		*presec2(int quantity, int *sequence)
{
	int	*sec;
	int	i;
	int	x;
	int	j;

	sec = NULL;
	sec = sequencecreate2(quantity, sec, quantity);
	i = 1;
	j = 1;
	x = sequence[0];
	sec[0] = quantity;
	sequence = sec_gen2(sequence, i, j, sec);
	sequence[0] = x - 1;
	free(sec);
	return (sequence);
}

void	transposition2(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	sequence = presec2(quantity, sequence);
	while (j < quantity)
	{
		x = sequence[j + 1];
		while (i < 8)
		{
			pole[j][i] = figures[x][i];
			i++;
		}
		i = 0;
		j++;
	}
	return ;
}
