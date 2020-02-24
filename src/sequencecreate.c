/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequencecreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:18:00 by sphone            #+#    #+#             */
/*   Updated: 2020/02/24 06:14:43 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*sequencecreate()
{
	int	i;
	int *sequence;

	i = 2;
	if (!(sequence = (int *)malloc(i * sizeof(int))))
		return (NULL);
	i = 0;
	sequence[0] = 0;
	sequence[1] = 0;
	return (sequence);
}
