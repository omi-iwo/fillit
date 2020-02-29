/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createplace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:13:49 by sphone            #+#    #+#             */
/*   Updated: 2020/02/29 12:01:01 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**createplace(int qua)
{
	int	i;
	int **figures;

	i = 0;
	if (!(figures = (int **)malloc(qua * sizeof(int*))))
		return (NULL);
	while (qua > i)
	{
		if (!(figures[i++] = (int *)malloc(8 * sizeof(int))))
		{
			freefigures(figures, i);
			return (NULL);
		}
	}
	return (figures);
}
