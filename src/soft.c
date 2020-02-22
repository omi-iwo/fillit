/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soft.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 05:18:53 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	soft(int **pole, int **figures, int qua)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < qua)
	{
		while (i < 8)
		{
			pole[j][i] = figures[j][i];
			i++;
		}
		i = 0;
		j++;
	}
	return ;
}
