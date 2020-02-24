/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freefigures.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 01:51:21 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	freefigures(int **figures, int qua)
{
	int	i;

	i = 0;
	while (i < qua)
	{
		free(figures[i++]);
	}
	free(figures);
	return ;
}
