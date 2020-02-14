/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequencecreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:18:00 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:43:56 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*sequencecreate2(int quantity, int *seq, int j)
{
	int	i;

	i = quantity + 2;
	if (!(seq = (int *)malloc(i * sizeof(int))))
		return (NULL);
	i = 0;
	seq[i] = get_num(quantity) / quantity;
	i++;
	while (i < quantity + 1)
	{
		seq[i] = i - 1;
		i++;
	}
	seq[quantity + 1] = j;
	return (seq);
}
