/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:16:17 by sphone            #+#    #+#             */
/*   Updated: 2020/02/20 14:54:59 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		more(long long *sec, long long *seq, int i, int j)
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
	seq[i] = sec[j];
	sec[j] = -1;
	sec[0]--;
	j++;
	if (j == quantity)
		j = 1;
	return (j);
}
