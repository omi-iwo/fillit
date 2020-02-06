/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:16:17 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		more(int *sec, int *sequence, int i, int j)
{
	int	quantity;

	quantity = sec[0] + i;
	if (j >= quantity)
		j = 1 + (j - quantity);
	while (sec[j] < 0)
	{
		j++;
		if (j == quantity)
			j = 1;
	}
	sequence[i] = sec[j];
	sec[j] = -1;
	sec[0]--;
	j++;
	if (j == quantity)
		j = 1;
	return (j);
}
