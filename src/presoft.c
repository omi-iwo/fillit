/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:42:47 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		preback(int **pole, int **figures, int quantity, int *sequence)
{
	sequence[0] = 1;
	return (assemblyback(pole, figures, quantity, sequence));
}

int		presoft(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;

	i = 0;
	if (sequence[0] < get_num(quantity))
		transposition(pole, figures, quantity, sequence);
	else
	{
		if ((preback(pole, figures, quantity, sequence)))
			return (2);
		soft(pole, figures, quantity);
		sequence[i++] = 1;
		while (i < quantity + 1)
		{
			sequence[i] = i - 1;
			i++;
		}
		return (1);
	}
	return (0);
}
