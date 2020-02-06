/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 05:28:04 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	freeall(int **pole, int **figures, int quantity, int *sequence)
{
	freefigures(figures, quantity);
	freefigures(pole, quantity);
	free(sequence);
	return ;
}
