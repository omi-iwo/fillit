/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charly.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 01:57:27 by sphone            #+#    #+#             */
/*   Updated: 2020/02/06 11:42:13 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		val4(int j, int t, int r, int n)
{
	if ((t == 0 && r == 0) && (n == 0))
		return (j);
	else
		return (0);
}

int		val3(int t, int r)
{
	if (t == 12 && r == 4)
		return (0);
	return (1);
}

int		val2(const char *test, int i)
{
	int	k;
	int	s;

	k = 0;
	s = 0;
	if (i > 20)
		s = i - 21;
	while (s < i)
	{
		if (test[s] == '#')
		{
			if (test[s + 1] == '#')
				k++;
			if (s <= i - 5 && test[s + 5] == '#')
				k++;
		}
		s++;
	}
	if (k == 3 || k == 4)
		return (0);
	else
		return (1);
}

int		val(const char *test, int i, int j)
{
	int	t;
	int	r;
	int	n;

	t = 0;
	r = 0;
	n = 0;
	while (n != 5)
	{
		if (test[i] == '\0')
			return (val4(j, t, r, n));
		if (test[i] == '#')
			r++;
		if (test[i] == '.')
			t++;
		if (test[i++] == '\n')
			n++;
	}
	if (!(val3(t, r)))
	{
		if (!(val2(test, i)))
			return (val(test, i, j + 1));
	}
	return (0);
}

int		charly(const char *test)
{
	int	i;
	int	j;

	i = 0;
	while (test[i] != '\0')
	{
		if (test[i] != '#' && (test[i] != '.' && test[i] != '\n'))
			errors(1);
		i++;
	}
	i = 0;
	j = 0;
	if (!(i = val(test, i, j)))
		errors(1);
	return (i);
}
