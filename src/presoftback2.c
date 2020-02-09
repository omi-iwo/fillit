/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoftback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/09 03:08:26 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		presoftback2(int **pole, int **figures, int quantity, int *sequence)
{
	int	i;

	i = 0;
	if (sequence[0] > 0)
		transposition2(pole, figures, quantity, sequence);
	else
		return (0);
	return (1);
}
