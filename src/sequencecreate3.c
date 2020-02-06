/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequencecreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:18:00 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 17:16:49 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		sequencecreate3(int quantity, int *sequence)
{
	int		i;

	i = 0;
	sequence[i] = get_num(quantity);
	i++;
	while (i < quantity + 1)
	{
		sequence[i] = i - 1;
		i++;
	}
	return ;
}
