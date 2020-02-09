/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/09 02:55:41 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		preback2(int **pole, int **figures, int quantity, int *sequence)
{
	sequence[0] = get_num(quantity) / quantity;
	return (assemblyback2(pole, figures, quantity, sequence));
}

int		presoft2(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;

	i = 0;
	if (sequence[0] > 0)
		transposition2(pole, figures, quantity, sequence);
	else
	{
		preback2(pole, figures, quantity, sequence);
		return (1);
	}
	return (0);
}
