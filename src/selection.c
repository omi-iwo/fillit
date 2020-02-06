/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:29:27 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 17:16:49 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	selection(char *test, int quantity)
{
	int	**figures;
	int	**pole;
	int	*sequence;

	figures = NULL;
	sequence = NULL;
	pole = NULL;
	if (!(figures = createplace(figures, quantity)))
		errors(1);
	place(test, figures);
	preshift(figures, quantity);
	if (!(pole = createplace(figures, quantity)))
		errors(1);
	if (!(sequence = sequencecreate(quantity, sequence)))
		errors(1);
	soft(pole, figures, quantity);
	prer(pole, figures, quantity, sequence);
	ready(pole, quantity, sequence[quantity + 1], sequence);
	freeall(pole, figures, quantity, sequence);
	return ;
}
