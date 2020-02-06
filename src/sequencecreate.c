/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequencecreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:18:00 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:30:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*sequencecreate(int quantity, int *sequence)
{
	int	i;

	i = quantity + 2;
	if (!(sequence = (int *)malloc(i * sizeof(int))))
		return (NULL);
	i = 0;
	sequence[i] = 1;
	i++;
	while (i < quantity + 1)
	{
		sequence[i] = i - 1;
		i++;
	}
	sequence[quantity + 1] = 0;
	return (sequence);
}
