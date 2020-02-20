/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 05:28:04 by sphone            #+#    #+#             */
/*   Updated: 2020/02/20 14:40:55 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	freeall(int **pole, int **figures, int qua, long long *seq)
{
	freefigures(figures, qua);
	freefigures(pole, qua);
	free(seq);
	return ;
}
