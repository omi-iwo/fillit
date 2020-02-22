/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createplace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:13:49 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**createplace(int **figures, int quantity)
{
	int	i;

	i = 0;
	if (!(figures = (int **)malloc(quantity * sizeof(int*))))
		return (NULL);
	while (quantity > i)
	{
		if (!(figures[i++] = (int *)malloc(8 * sizeof(int))))
		{
			freefigures(figures, i);
			return (NULL);
		}
	}
	return (figures);
}
