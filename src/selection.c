/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:29:27 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 02:19:19 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			selection(char *test, int qua)
{
	int			**figures;
	int			**pole;
	long long	*seq;

	figures = NULL;
	seq = NULL;
	pole = NULL;
	if (!(figures = createplace(figures, qua)))
		errors(1);
	place(test, figures);
	preshift(figures, qua);
	if (!(pole = createplace(figures, qua)))
		errors(1);
	if (!(seq = sequencecreate(qua)))
		errors(1);
	soft(pole, figures, qua);
	prer(pole, figures, qua, seq);
	ready(pole, qua, seq[qua + 1], seq);
	freeall(pole, figures, qua, seq);
	return ;
}
