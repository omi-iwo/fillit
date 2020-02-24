/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/24 06:48:11 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	soft(int *pole, int *figures)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		pole[i] = figures[i];
		i++;
	}
	return ;
}

void		presoft(int **pole, int **figures, int qua, int *seq)
{
	soft(pole[seq[0]], figures[seq[0]]);
	if (seq[0] > 0)
	{
		seq[0]--;
		if (shiftpole(pole[seq[0]], seq[1], figures[seq[0]]) != 0)
			presoft(pole, figures, qua, seq);
	}
	else
		seq[1]++;
	return ;
}
