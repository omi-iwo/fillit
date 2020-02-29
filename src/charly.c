/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charly.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 01:57:27 by sphone            #+#    #+#             */
/*   Updated: 2020/02/29 16:07:32 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
//
//int		val4(int j, int t, int r, int n)
//{
//	if ((t == 0 && r == 0) && (n == 0))
//		return (j);
//	else
//		return (0);
//}
//
//int		val3(int t, int r)
//{
//	if (t == 12 && r == 4)
//		return (0);
//	return (1);
//}
//
//int		val2(const char *test, int i)
//{
//	int	k;
//	int	s;
//
//	k = 0;
//	s = 0;
//	if (i > 20)
//		s = i - 21;
//	while (s < i)
//	{
//		if (test[s] == '#')
//		{
//			if (test[s + 1] == '#')
//				k++;
//			if (s <= i - 5 && test[s + 5] == '#')
//				k++;
//		}
//		s++;
//	}
//	if (k == 3 || k == 4)
//		return (0);
//	else
//		return (1);
//}

int		check_one_tetri(const char *test, int i, int r, int t)
{
	int s;
	int x;
	int y;

	if (r % 4 != 0 && (t % 12 != 0))
		return (-1);
	s = 0;
	y = -1;
	while (++y < 3 && (x = -1) == -1)
		while (++x < 4)
			if (test[i + y * 5 + x] == '#' && test[i + (y + 1) * 5 + x] == '#')
				s++;
	y = -1;
	while (++y < 4 && (x = -1) == -1)
		while (++x < 3)
			if (test[i + y * 5 + x] == '#' && test[i + y * 5 + (x + 1)] == '#')
				s++;
	if (s == 3 || s == 4)
		return (1);
	return (-1);
}

enum ARGS
{
	I, LAST_I, T, R, N
};

int		val(const char *test)
{
	int args[5];

	args[I] = N + 1;
	while (--args[I] > 0)
		args[args[I]] = (args[I] == I) ? -1 : 0;
	while (test[++args[I]] != '\0')
		if (test[args[I]] == '#')
			args[R]++;
		else if (test[args[I]] == '.')
			args[T]++;
		else if (test[args[I]] == '\n' && (args[N]++) > -3)
		{
			if (args[N] % 5 == 0 && args[N] > 0)
			{
				if (check_one_tetri(test, args[LAST_I], args[R], args[T]) < 0)
					errors(1);
				args[LAST_I] = args[I] + 1;
			}
		}
		else
			errors(1);
	return (-1 * (args[LAST_I] != args[I]) +
			args[N] / 5 * (args[LAST_I] == args[I]));
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
	if ((i = val(test)) < 0)
		errors(1);
	return (i);
}
