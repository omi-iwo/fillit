/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/05 07:06:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		preback3(int **pole, int **figures, int quantity, int *sequence)
{
	sequence[0] = get_num(quantity);
	return (assemblyback2(pole, figures, quantity, sequence));
}

int		presoft3(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;

	i = 0;

	if (sequence[0] > 0)
		transposition2(pole, figures, quantity, sequence);
	else
	{
		preback3(pole, figures, quantity, sequence);
		return (1);
	}
	return (0);
}
