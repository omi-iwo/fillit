/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shiftpole.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:25:52 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:44:32 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		yshifttestback(int *onepole, int *figures)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (onepole[i + 1] - 1 > 0)
			i += 2;
		else
			return (1);
	}
	i = 0;
	while (i < 8)
	{
		onepole[i] = figures[i];
		onepole[i + 1]--;
		i += 2;
	}
	return (0);
}

int		xshifttestback(int *onepole)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (onepole[i] - 1 > 0)
			i += 2;
		else
			return (1);
	}
	i = 0;
	while (i < 8)
	{
		onepole[i]--;
		i += 2;
	}
	return (0);
}

int		shiftpoleback(int *onepole, int *figures)
{
	if (xshifttestback(onepole) != 0)
	{
		if (yshifttestback(onepole, figures) != 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
