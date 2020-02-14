/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soft.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 05:18:53 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:44:50 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	soft(int **pole, int **figures, int quantity)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < quantity)
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
