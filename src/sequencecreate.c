/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequencecreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:18:00 by sphone            #+#    #+#             */
/*   Updated: 2020/02/20 16:25:34 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

long long		*sequencecreate(int qua)
{
	int	i;
	long long *sequence;

	i = qua + 2;
	if (!(sequence = (long long *)malloc(i * sizeof(long long))))
		return (NULL);
	i = 0;
	sequence[i] = 1;
	i++;
	while (i < qua + 1)
	{
		sequence[i] = i - 1;
		i++;
	}
	sequence[qua + 1] = 0;
	return (sequence);
}
