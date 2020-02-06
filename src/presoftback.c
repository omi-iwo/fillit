/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presoftback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:19:18 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		presoftback(int **pole, int **figures, int quantity, int *sequence)
{

	int	i;

	i = 0;
	if (sequence[0] < get_num(quantity))
		transposition(pole, figures, quantity, sequence);

	else
		return (0);
	return (1);
}
