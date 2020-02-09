/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prer.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:53:34 by sphone            #+#    #+#             */
/*   Updated: 2020/02/09 02:54:54 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**tempys(int **pole, int **figures, int quantity)
{
	int **temp;

	temp = createplace(figures, quantity);
	swapy(temp, pole, quantity);
	return (temp);
}

void	pretest(int **pole, int **figures, int quantity, int *seq)
{
	soft(pole, figures, quantity);
	sequencecreate3(quantity, seq);
	assembly3(pole, figures, quantity, seq);
	return ;
}

void	copyseq(int *seq, int *sequence, int quantity)
{
	int	i;

	i = 0;
	while (i < quantity + 1)
	{
		sequence[i] = seq[i];
		i++;
	}
	free(seq);
	return ;
}

void	prer(int **pole, int **figures, int quantity, int *sequence)
{
	int **temp;
	int *seq;
	int i;

	seq = NULL;
	temp = tempys(pole, figures, quantity);
	assembly(pole, figures, quantity, sequence);
	swapy(temp, pole, quantity);
	soft(pole, figures, quantity);
	seq = sequencecreate2(quantity, seq, sequence[quantity + 1]);
	if ((i = assembly2(pole, figures, quantity, seq)) == 1)
		pretest(pole, figures, quantity, seq);
	seq[0] = quantity;
	if (testpre(pole, temp, seq, sequence) == 0)
		copyseq(seq, sequence, quantity);
	freefigures(temp, quantity);
	return ;
}
