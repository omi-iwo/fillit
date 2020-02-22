/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shiftpole.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:25:52 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 01:05:16 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		yshifttest(int *onepole, long long size, int *figures)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (onepole[i + 1] + 1 < size + 1)
			i += 2;
		else
			return (1);
	}
	i = 0;
	while (i < 8)
	{
		onepole[i] = figures[i];
		onepole[i + 1]++;
		i += 2;
	}
	return (0);
}

int		xshifttest(int *onepole, long long size)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (onepole[i] + 1 < size + 1)
			i += 2;
		else
			return (1);
	}
	i = 0;
	while (i < 8)
	{
		onepole[i]++;
		i += 2;
	}
	return (0);
}

int		shiftpole(int *onepole, long long size, int *figures)
{
	if (xshifttest(onepole, size) != 0)
	{
		if (yshifttest(onepole, size, figures) != 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
